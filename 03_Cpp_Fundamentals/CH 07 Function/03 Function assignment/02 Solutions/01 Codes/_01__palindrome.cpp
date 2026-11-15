//  Write a function to check if a number is palindrome in c+++.
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main() {
    int n = 121;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
