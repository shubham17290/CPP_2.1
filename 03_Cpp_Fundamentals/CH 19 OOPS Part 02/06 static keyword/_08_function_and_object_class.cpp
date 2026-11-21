#include <iostream>
using namespace std;

// =====================================================
// 1) FRIEND FUNCTION
// =====================================================
class Box {
  private:
    int width = 10; // private — normally hidden

    // Declare a non-member function as a friend
    friend void showWidth(Box &b);
};

// Normal function (NOT a member of Box), but can read b.width
void showWidth(Box &b) {
    cout << "Box width = " << b.width << endl; // ✅ allowed
}

// =====================================================
// 2) FRIEND CLASS
// =====================================================
class Secret {
  private:
    int password = 1234; // private

    friend class Spy; // Spy class can see everything
};

class Spy {
  public:
    void steal(Secret &s) {
        cout << "Stolen password = " << s.password << endl; // ✅ allowed
    }
};

// =====================================================
int main() {
    Box b;
    showWidth(b); // friend function in action

    Secret s;
    Spy spy;
    spy.steal(s); // friend class in action
    return 0;
}
