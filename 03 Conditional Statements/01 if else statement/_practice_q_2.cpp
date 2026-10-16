#include <iostream>
using namespace std;
//  print if a number is odd ofr even
int main() {
    int num;
    cout << "Enter num :  \n";
    cin >> num;
    if (num % 2 == 0) {
        cout << "number is even" << endl;
    } else {
        cout << "number n : " << num << " is not even : " << endl;
    }

    return 0;
}
