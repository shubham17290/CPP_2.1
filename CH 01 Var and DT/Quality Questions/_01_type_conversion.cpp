#include <iostream>
using namespace std;

// Quality question: implicit vs explicit type conversion.
int main() {
    int a = 7, b = 2;
    cout << "Integer division: " << a / b << endl;
    cout << "Float division:   " << (float)a / b << endl;
    cout << "Char of 65:       " << (char)65 << endl;
    return 0;
}
