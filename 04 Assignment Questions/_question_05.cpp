#include <iostream>
using namespace std;
/*Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg : 371 is an armstrong number.
3*3*3 + 7*7*7 + 1*1*1 = 371*/
int main() {
    int num, originalNum, remainder, sum = 0;

    cout << "Enter a 3-digit integer: ";
    cin >> num;

    originalNum = num;

    // Extract each digit, cube it, and add to sum
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += remainder * remainder * remainder;
        originalNum /= 10;
    }

    // Check if sum of cubes equals the original number
    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
