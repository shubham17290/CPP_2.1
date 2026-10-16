#include <iostream>
using namespace std;
//  Print the largest of 2 numbers
int main() {
    int a, b;
    cout << "Enter number a : " << endl;
    cin >> a;
    cout << "Enter number b : " << endl;
    cin >> b;
    if (a > b) {
        cout << "a is largest" << endl;
    } else {
        cout << "b is largest : " << endl;
    }

    return 0;
}
