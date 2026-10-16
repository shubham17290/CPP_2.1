#include <iostream>
using namespace std;

int main() {
    //  let's make a basic calculator :
    // making calculator is must
    //  Build a calculator using switch for the 4 basic arithmetic operations(+  , - , * , /)
    float a, b;
    char op;
    cout << "enter the a :" << endl;
    cin >> a;
    cout << "enter the b :" << endl;
    cin >> b;
    cout << "enter the operator:" << endl;
    cin >> op;
    // Calculator
    if (op == '+') {
        cout << " a + b = " << (a + b) << endl;
    } else if (op == '-') {
        cout << " a - b = " << (a - b) << endl;

    }

    else if (op == '*') {
        cout << " a * b = " << (a * b) << endl;
    }

    else if (op == '/') {
        cout << " a / b = " << (a / b) << endl;
    } else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}
