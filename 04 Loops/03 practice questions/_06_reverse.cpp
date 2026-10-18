#include <iostream>
using namespace std;
// reverse a given number & print the result
int main() {
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    int res = 0;
    while (n != 0) {

        int lastdig = n % 10;     // extract the last digits
        res = res * 10 + lastdig; // this is the logic of making any number
        n = n / 10;               // will delete the last digit
    }
    cout << res << endl; // the resverse of the number in the new variable
    return 0;
    //  Now all set
}
