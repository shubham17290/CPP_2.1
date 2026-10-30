#include <iostream>
using namespace std;

// Quality question: demonstrate bitwise AND, OR, XOR, NOT, shifts.
int main() {
    int a = 5, b = 3; // 101, 011
    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;
    return 0;
}
