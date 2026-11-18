// Interactive terminal dashboard for the calculator.
// Full-screen TUI: arrow-key + mouse keypad navigation, live display, scrollable history.
// Build: g++ -std=c++17 -o calculator_dashboard.exe _calculator_dashboard.cpp

#include "calculator_core.h"

#include <conio.h>
#include <windows.h>

#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif
#ifndef ENABLE_MOUSE_INPUT
#define ENABLE_MOUSE_INPUT 0x0010
#endif
#ifndef ENABLE_WINDOW_INPUT
#define ENABLE_WINDOW_INPUT 0x0008
#endif
#ifndef ENABLE_QUICK_EDIT_MODE
#define ENABLE_QUICK_EDIT_MODE 0x0040
#endif
#ifndef ENABLE_EXTENDED_FLAGS
#define ENABLE_EXTENDED_FLAGS 0x0080
#endif
#ifndef MOUSE_WHEELED
#define MOUSE_WHEELED 0x0004
#endif
#ifndef MOUSE_MOVED
#define MOUSE_MOVED 0x0001
#endif
#ifndef FROM_LEFT_1ST_BUTTON_PRESSED
#define FROM_LEFT_1ST_BUTTON_PRESSED 0x0001
#endif

namespace {

constexpr int MIN_COLS = 66;
constexpr int MIN_ROWS = 21;

enum SpecialKey {
    KEY_UP = 1000,
    KEY_DOWN,
    KEY_LEFT,
    KEY_RIGHT,
    KEY_DELETE,
    KEY_IGNORE = -3, // event handled internally, just redraw
    KEY_EOF = -1,
    KEY_UNKNOWN = -2,
    KEY_ENTER = 13,
    KEY_BACKSPACE = 8,
    KEY_ESC = 27
};

enum class Act { Insert, Clear, Del, Equals };

struct Button {
    const char* label;
    const char* insert; // character appended to the expression ("" = none)
    Act act;
};

const std::vector<Button> kButtons = {
    {"AC",  "",    Act::Clear},   {"(",   "(",   Act::Insert}, {")",   ")",   Act::Insert}, {"/",   "/",   Act::Insert},
    {"7",   "7",   Act::Insert},  {"8",   "8",   Act::Insert}, {"9",   "9",   Act::Insert}, {"*",   "*",   Act::Insert},
    {"4",   "4",   Act::Insert},  {"5",   "5",   Act::Insert}, {"6",   "6",   Act::Insert}, {"-",   "-",   Act::Insert},
    {"1",   "1",   Act::Insert},  {"2",   "2",   Act::Insert}, {"3",   "3",   Act::Insert}, {"+",   "+",   Act::Insert},
    {"0",   "0",   Act::Insert},  {".",   ".",   Act::Insert}, {"DEL", "",    Act::Del},    {"=",   "",    Act::Equals},
};

HANDLE g_out = INVALID_HANDLE_VALUE;
HANDLE g_in = INVALID_HANDLE_VALUE;
DWORD g_outMode = 0;
DWORD g_inMode = 0;
CONSOLE_CURSOR_INFO g_savedCursor = {};

std::string g_frame;
std::string g_expr;       // current expression being typed
std::string g_lastValue;  // last numeric result (e.g. "14")
std::string g_error;
std::vector<std::string> g_history; // newest first, "expr = result"
int g_sel = 4;             // selected button index (keyboard cursor, starts on '7')
int g_hover = -1;          // button under the mouse cursor
int g_historyOffset = 0;   // 0 = newest; wheel scrolls to older entries
bool g_justEvaluated = false;
bool g_running = true;

// ---------- small helpers ----------

void put(int x, int y, const std::string& s) {
    g_frame += "\x1b[" + std::to_string(y + 1) + ";" + std::to_string(x + 1) + "H" + s;
}

std::string repeat(char c, int n) {
    return n > 0 ? std::string(n, c) : std::string();
}

std::string clip(const std::string& s, int maxw) {
    if (maxw <= 0) return "";
    if ((int)s.size() <= maxw) return s;
    if (maxw <= 3) return s.substr(0, maxw);
    return s.substr(0, maxw - 3) + "...";
}

// ---------- layout (shared by drawing and mouse hit-testing) ----------

struct Layout {
    int cols, rows;
    int histW, leftX, leftW;
    int topY, dispH, btnY, btnH;
    int histX, histH, statusY, cellW;
};

Layout computeLayout(int cols, int rows) {
    Layout L{};
    L.cols = cols;
    L.rows = rows;
    L.histW = 30;
    L.leftX = 1;
    L.leftW = cols - L.histW - 4;
    L.topY = 1;
    L.dispH = 5;
    L.btnY = L.topY + L.dispH + 1;
    L.btnH = 11;
    L.histX = L.leftX + L.leftW + 2;
    L.histH = L.dispH + 1 + L.btnH;
    L.statusY = L.btnY + L.btnH + 1;
    L.cellW = (L.leftW - 2) / 4;
    return L;
}

// Returns the button index at screen position (x, y), or -1.
int hitTestButton(int x, int y, const Layout& L) {
    const int innerX = x - (L.leftX + 1);
    const int innerY = y - (L.btnY + 1);
    if (innerX < 0 || innerY < 0) return -1;
    if (innerY >= 9 || innerX >= L.cellW * 4) return -1;
    if (innerY % 2 != 0) return -1; // blank row between button rows
    const int r = innerY / 2;
    const int c = innerX / L.cellW;
    if (r > 4 || c > 3) return -1;
    return r * 4 + c;
}

void drawBox(int x, int y, int w, int h, const std::string& title) {
    std::string top = "+";
    const int inner = w - 2;
    if (!title.empty()) {
        std::string t = " " + title + " ";
        const int side = std::max(0, (inner - (int)t.size()) / 2);
        top += repeat('-', side) + t;
    }
    top += repeat('-', inner - ((int)top.size() - 1)) + "+";
    put(x, y, top);
    for (int i = 1; i < h - 1; ++i) {
        put(x, y + i, "|");
        put(x + w - 1, y + i, "|");
    }
    put(x, y + h - 1, "+" + repeat('-', inner) + "+");
}

bool consoleSize(int& cols, int& rows) {
    CONSOLE_SCREEN_BUFFER_INFO info;
    if (!GetConsoleScreenBufferInfo(g_out, &info)) {
        // Redirected output (no real console): fall back to a sane size.
        cols = 100;
        rows = 30;
        return true;
    }
    cols = info.srWindow.Right - info.srWindow.Left + 1;
    rows = info.srWindow.Bottom - info.srWindow.Top + 1;
    return true;
}

// ---------- calculator state ----------

std::string formatResult(double r) {
    std::ostringstream os;
    os << r;
    return os.str();
}

void insertChar(const std::string& s) {
    g_error.clear();
    if (g_justEvaluated) {
        const char ch = s[0];
        if (std::isdigit((unsigned char)ch) || ch == '.') {
            g_expr.clear(); // typing a number starts a fresh calculation
        } else {
            g_expr = g_lastValue; // an operator continues from the result
        }
        g_lastValue.clear();
        g_justEvaluated = false;
    }
    g_expr += s;
}

void doClear() {
    g_expr.clear();
    g_lastValue.clear();
    g_error.clear();
    g_justEvaluated = false;
}

void doBackspace() {
    g_error.clear();
    if (g_justEvaluated) {
        // Re-open the expression for editing, discarding the shown result.
        g_justEvaluated = false;
        g_lastValue.clear();
        return;
    }
    if (!g_expr.empty()) {
        g_expr.pop_back();
    }
}

void doEval() {
    if (g_justEvaluated) return; // '=' twice does nothing
    if (g_expr.empty()) {
        g_error = "Nothing to evaluate";
        return;
    }
    try {
        const double r = evaluate(g_expr);
        g_lastValue = formatResult(r);
        g_error.clear();
        g_history.insert(g_history.begin(), g_expr + " = " + g_lastValue);
        g_justEvaluated = true;
        g_historyOffset = 0; // jump to the newest entry
    } catch (const std::exception& e) {
        g_error = e.what();
    }
}

void activate(int i) {
    const Button& b = kButtons[i];
    switch (b.act) {
        case Act::Insert: insertChar(b.insert); break;
        case Act::Clear:  doClear(); break;
        case Act::Del:    doBackspace(); break;
        case Act::Equals: doEval(); break;
    }
}

// ---------- drawing ----------

void drawTooSmall() {
    g_frame = "\x1b[2J\x1b[H";
    put(1, 0, "Terminal too small - resize to at least " +
                  std::to_string(MIN_COLS) + "x" + std::to_string(MIN_ROWS) + ".");
    std::cout << g_frame << std::flush;
}

void draw() {
    int cols = 0, rows = 0;
    consoleSize(cols, rows);
    if (cols < MIN_COLS || rows < MIN_ROWS) {
        drawTooSmall();
        return;
    }

    const Layout L = computeLayout(cols, rows);
    g_frame = "\x1b[2J\x1b[H"; // clear + home

    // Title
    const std::string title = " C++ CALCULATOR DASHBOARD ";
    put(std::max(0, (cols - (int)title.size()) / 2), 0, "\x1b[1;36m" + title + "\x1b[0m");

    // Display box
    drawBox(L.leftX, L.topY, L.leftW, L.dispH, "Display");
    const std::string exprLine = g_expr.empty() && !g_justEvaluated ? "0" : g_expr;
    put(L.leftX + 2, L.topY + 1, "\x1b[1;37m" + clip(exprLine, L.leftW - 4) + "\x1b[0m");
    if (!g_error.empty()) {
        put(L.leftX + 2, L.topY + 2, "\x1b[1;31m" + clip(g_error, L.leftW - 4) + "\x1b[0m");
    } else if (g_justEvaluated && !g_lastValue.empty()) {
        put(L.leftX + 2, L.topY + 2, "\x1b[1;32m" + clip("= " + g_lastValue, L.leftW - 4) + "\x1b[0m");
    }
    put(L.leftX + 2, L.topY + 3, "\x1b[2;37m" +
        clip("type, click buttons, or use arrow keys + Enter", L.leftW - 4) + "\x1b[0m");

    // Keypad box
    drawBox(L.leftX, L.btnY, L.leftW, L.btnH, "Keypad");
    for (int i = 0; i < (int)kButtons.size(); ++i) {
        const int r = i / 4;
        const int c = i % 4;
        const int bx = L.leftX + 1 + c * L.cellW;
        const int by = L.btnY + 1 + r * 2;
        const std::string label = kButtons[i].label;
        const int pad = std::max(0, (L.cellW - (int)label.size()) / 2);
        const std::string text = clip(repeat(' ', pad) + label, L.cellW);
        const char* style = (i == g_sel)   ? "\x1b[7;36m"   // cyan reverse = keyboard selection
                          : (i == g_hover) ? "\x1b[7;33m"   // yellow reverse = mouse hover
                                           : "\x1b[0;37m";
        put(bx, by, style + text + "\x1b[0m");
    }

    // History box (wheel-scrollable; newest first)
    drawBox(L.histX, L.topY, L.histW, L.histH, "History");
    if (g_history.empty()) {
        put(L.histX + 2, L.topY + 1, "\x1b[2;37m(no calculations yet)\x1b[0m");
    } else {
        const int start = std::min(g_historyOffset, (int)g_history.size());
        const int maxEntries = L.histH - 2;
        int shown = 0;
        for (int i = start; i < (int)g_history.size() && shown < maxEntries; ++i, ++shown) {
            put(L.histX + 2, L.topY + 1 + shown, clip(g_history[i], L.histW - 4));
        }
        if (start > 0) {
            put(L.histX + 2, L.topY + L.histH - 2, "\x1b[2;33m(use wheel to scroll)\x1b[0m");
        }
    }

    // Status bar
    const std::string status =
        " Arrows: move | Enter: press | Click: press | Wheel: history | C: clear | Q/Esc: quit ";
    put(1, L.statusY, "\x1b[2;33m" + clip(status, cols - 2) + "\x1b[0m");

    std::cout << g_frame << std::flush;
}

// ---------- input (console events: keys + mouse) ----------

// Returns false when input can no longer be read (EOF / no console) -> quit.
// On true, keyOut holds a key code, or KEY_IGNORE meaning "just redraw".
bool nextEvent(int& keyOut) {
    INPUT_RECORD rec;
    DWORD n = 0;
    if (!ReadConsoleInput(g_in, &rec, 1, &n) || n == 0) {
        // A real console can take a moment to attach right after launch;
        // retry briefly instead of quitting on the first failure.
        for (int attempt = 0; attempt < 100 && g_running; ++attempt) {
            Sleep(50);
            if (ReadConsoleInput(g_in, &rec, 1, &n) && n > 0) {
                break;
            }
        }
        if (!(n > 0)) {
            return false;
        }
    }
    if (rec.EventType == KEY_EVENT && rec.Event.KeyEvent.bKeyDown) {
        const KEY_EVENT_RECORD& k = rec.Event.KeyEvent;
        switch (k.wVirtualKeyCode) {
            case VK_UP:     keyOut = KEY_UP;     return true;
            case VK_DOWN:   keyOut = KEY_DOWN;   return true;
            case VK_LEFT:   keyOut = KEY_LEFT;   return true;
            case VK_RIGHT:  keyOut = KEY_RIGHT;  return true;
            case VK_DELETE: keyOut = KEY_DELETE; return true;
            case VK_RETURN: keyOut = KEY_ENTER;  return true;
            case VK_BACK:   keyOut = KEY_BACKSPACE; return true;
            case VK_ESCAPE: keyOut = KEY_ESC;    return true;
            default: break;
        }
        const char ch = k.uChar.AsciiChar;
        if (ch != 0) {
            keyOut = (unsigned char)ch;
            return true;
        }
        keyOut = KEY_IGNORE; // function keys etc: ignore, but redraw
        return true;
    }
    if (rec.EventType == MOUSE_EVENT) {
        const MOUSE_EVENT_RECORD& m = rec.Event.MouseEvent;
        if (m.dwEventFlags == MOUSE_WHEELED) {
            const short delta = (short)HIWORD(m.dwButtonState);
            g_historyOffset += (delta > 0) ? -1 : 1; // wheel up = older entries
            g_historyOffset = std::max(0, std::min(g_historyOffset, (int)g_history.size()));
            keyOut = KEY_IGNORE;
            return true;
        }
        if (m.dwEventFlags == MOUSE_MOVED) {
            int cols = 0, rows = 0;
            consoleSize(cols, rows);
            if (cols >= MIN_COLS && rows >= MIN_ROWS) {
                g_hover = hitTestButton(m.dwMousePosition.X, m.dwMousePosition.Y, computeLayout(cols, rows));
            }
            keyOut = KEY_IGNORE;
            return true;
        }
        if (m.dwEventFlags == 0 && (m.dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED)) {
            // Left click on the keypad = press that button.
            int cols = 0, rows = 0;
            consoleSize(cols, rows);
            if (cols >= MIN_COLS && rows >= MIN_ROWS) {
                const int btn = hitTestButton(m.dwMousePosition.X, m.dwMousePosition.Y, computeLayout(cols, rows));
                if (btn >= 0) {
                    g_sel = btn;
                    activate(btn);
                }
            }
            keyOut = KEY_IGNORE;
            return true;
        }
        keyOut = KEY_IGNORE;
        return true;
    }
    keyOut = KEY_IGNORE;
    return true;
}

void focusButtonFor(char ch) {
    for (int i = 0; i < (int)kButtons.size(); ++i) {
        if (kButtons[i].insert[0] == ch && kButtons[i].insert[1] == '\0') {
            g_sel = i;
            return;
        }
    }
}

void handleKey(int k) {
    switch (k) {
        case KEY_EOF:
        case KEY_ESC:
        case 'q':
        case 'Q':
            g_running = false;
            return;
        case KEY_UP:    g_sel = (g_sel + 16) % 20; return;
        case KEY_DOWN:  g_sel = (g_sel + 4) % 20; return;
        case KEY_LEFT:  g_sel = (g_sel / 4) * 4 + (g_sel % 4 + 3) % 4; return;
        case KEY_RIGHT: g_sel = (g_sel / 4) * 4 + (g_sel % 4 + 1) % 4; return;
        case KEY_ENTER:      activate(g_sel); return;
        case KEY_BACKSPACE:
        case KEY_DELETE:     doBackspace(); return;
        case 'c':
        case 'C':            doClear(); return;
        default: break;
    }
    // Direct typing of valid expression characters.
    if (k >= 32 && k < 127) {
        const char ch = (char)k;
        if (std::isdigit((unsigned char)ch) || ch == '.' || ch == '+' || ch == '-' ||
            ch == '*' || ch == '/' || ch == '(' || ch == ')') {
            insertChar(std::string(1, ch));
            focusButtonFor(ch);
        }
    }
}

// ---------- console setup / teardown ----------

void restoreConsole() {
    if (g_out != INVALID_HANDLE_VALUE) {
        CONSOLE_CURSOR_INFO ci = g_savedCursor;
        ci.bVisible = TRUE;
        SetConsoleCursorInfo(g_out, &ci);
        SetConsoleMode(g_out, g_outMode);
    }
    if (g_in != INVALID_HANDLE_VALUE && g_inMode != 0) {
        SetConsoleMode(g_in, g_inMode);
    }
    std::cout << "\x1b[0m" << std::flush;
}

BOOL WINAPI ctrlHandler(DWORD /*type*/) {
    restoreConsole();
    return FALSE; // let the default handler terminate the process
}

void initConsole() {
    g_out = GetStdHandle(STD_OUTPUT_HANDLE);
    g_in = GetStdHandle(STD_INPUT_HANDLE);

    GetConsoleMode(g_out, &g_outMode);
    SetConsoleMode(g_out, g_outMode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    // Raw-ish input: no line buffering, mouse events on, quick-edit off (so clicks reach us).
    if (GetConsoleMode(g_in, &g_inMode)) {
        DWORD mode = g_inMode;
        mode &= ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT | ENABLE_QUICK_EDIT_MODE);
        mode |= ENABLE_MOUSE_INPUT | ENABLE_WINDOW_INPUT | ENABLE_EXTENDED_FLAGS;
        SetConsoleMode(g_in, mode);
    }

    GetConsoleCursorInfo(g_out, &g_savedCursor);
    CONSOLE_CURSOR_INFO ci = g_savedCursor;
    ci.bVisible = FALSE;
    SetConsoleCursorInfo(g_out, &ci);

    SetConsoleCtrlHandler(ctrlHandler, TRUE);
    std::cout << "\x1b[2J\x1b[H" << std::flush;
}

} // namespace

int main() {
    initConsole();
    while (g_running) {
        draw();
        int k = KEY_IGNORE;
        if (!nextEvent(k)) {
            g_running = false; // input handle closed / no console
            break;
        }
        if (k != KEY_IGNORE) {
            handleKey(k);
        }
    }
    restoreConsole();
    std::cout << "Goodbye!" << std::endl;
    return 0;
}
