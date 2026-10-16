#include <iostream>
using namespace std;
//  program to check the odd or even--> using the ternary operator
int main() {
    int n;
    cout << "enter nunber :" << endl;
    cin >> n;

    int isEven = n % 2 == 0 ? true : false;
    cout << isEven << endl;

    return 0;
}
