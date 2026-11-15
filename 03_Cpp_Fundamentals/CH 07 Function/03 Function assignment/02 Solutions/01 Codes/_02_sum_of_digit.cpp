//  calculate the sum of the digits

#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main() {
    cout << sumOfDigits(1234);
    return 0;
}
