#include <iostream>
using namespace std;
/*
Question 1 : Write a C++ program to get a number from the user and print whether
it's positive, negative or zero
 */
int main() {
    int number;
    cout << "Enter the input : " << endl;
    cin >> number;
    if (number > 0) {
        cout << "Number is positive : " << endl;
    } else if (number < 0) {
        cout << "Number is negative : " << endl;
    } else {
        cout << "Number is zero : " << endl;
    }

    return 0;
}
