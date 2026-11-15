#include <iostream>
using namespace std;
int main() {

    int a = 10;
    a += 5;            // a = a+5
    cout << a << endl; // 15
    a -= 5;            // a = a-5
    cout << a << endl; // 10
    a *= 5;            // a = a*5
    cout << a << endl; // 50
    a /= 5;            // a = a/5
    cout << a << endl; // 10
    a %= 5;            // a = a%5
    cout << a << endl; // 0

    return 0;
}
