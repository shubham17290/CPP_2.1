#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "enter the numbers : " << endl;
    cin >> a >> b >> c;
    //  Print the largest number among 3 numbers
    if (a >= b && a >= c) {
        cout << " a is greatest :" << a << endl;
    } else if (b >= c) {
        cout << " b is largest" << b << endl;
    } else {
        cout << "c is largest" << endl;
    }
    return 0;
}
