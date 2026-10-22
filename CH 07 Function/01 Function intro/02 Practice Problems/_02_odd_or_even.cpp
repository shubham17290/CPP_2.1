
//  Write a function to print if a number is odd or even
#include <iostream>
using namespace std;
bool isEven(int n) {

    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
    //  here the return in the boolean
}
int main() {

    cout << isEven(21) << endl; // it will print the 0 and 1

    return 0;
}
