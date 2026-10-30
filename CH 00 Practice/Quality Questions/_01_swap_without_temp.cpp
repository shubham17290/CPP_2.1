#include <iostream>
using namespace std;

// Quality question: swap two integers without using a temporary variable.
int main() {
    int a = 5, b = 9;
    cout << "Before swap: a=" << a << " b=" << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap:  a=" << a << " b=" << b << endl;
    return 0;
}
