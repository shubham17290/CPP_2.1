#include <iostream>
using namespace std;
/* Question 3 : WAP to input a number and check whether the number is an Armstrong
number or not.
An Armstrong number is a number that is equal to the sum of cubes of its digits. */
int main() {
    int num, originalNum, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        sum += rem * rem * rem;
        originalNum /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
