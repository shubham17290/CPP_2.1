//  there are mainly 5 types of the relational OPERATORS
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Enter the numbers :" << endl;
    cin >> x;
    cin >> y;
    //   logical and
    cout << (x & y) << endl;
    //   logical or
    cout << (x | y) << endl;
    //   logical xor
    cout << (x ^ y) << endl;
    //  logical not -> unary operator hai jo value ko reverse krr deta hai
    cout << ~x << endl;
    cout << ~y << endl;

    return 0;
}
