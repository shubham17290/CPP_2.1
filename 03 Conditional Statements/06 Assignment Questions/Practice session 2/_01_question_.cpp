#include <iostream>
using namespace std;
int main() {
    int num;
    cout << " Enter the number here buddy : ";
    cin >> num;
    if (num > 0) {
        cout << "Numbers " << num << " is positive.\n";
    } else if (num < 0) {
        cout << "Numbers " << num << " is negative.\n";
    } else {
        cout << "Numbers " << num << " is zero.\n";
    }
    return 0;
}
