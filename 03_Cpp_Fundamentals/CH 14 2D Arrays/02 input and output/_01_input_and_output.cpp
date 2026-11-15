#include <iostream>

using namespace std;

int main() {
    // ---- Dimensions as named constants (easier to change later) ----
    const int ROWS = 3;
    const int COLS = 4;

    int arr[ROWS][COLS]; // holds ROWS * COLS = 12 values

    // ---- Input: fill the 2D array ----
    cout << "Enter " << ROWS * COLS << " numbers: " << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> arr[i][j];
        }
    }

    // ---- Output: traverse and print the 2D array ----
    int count = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << "    ";
            ++count;
        }
        cout << endl;
    }

    cout << "Total elements printed: " << count << endl;

    return 0;
}
