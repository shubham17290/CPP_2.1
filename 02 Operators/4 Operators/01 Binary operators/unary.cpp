#include <iostream>
using namespace std;
int main() {
    int a = 4;
    int b = 3;
    // Increment operators
    cout << "a = " << ++a << endl; // 4+1 = 5
    cout << "b = " << b++ << endl; // 3 -> 3+ 1 = 4
    // decrement operators
    cout << "a = " << --a << endl; // 5-1 -> 4
    cout << "b = " << b-- << endl; // 4 = 4-1 -> 4 -> 3
    cout << "b = " << b << endl;

    return 0;
}
