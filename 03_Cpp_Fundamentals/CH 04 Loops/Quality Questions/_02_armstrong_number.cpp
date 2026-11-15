#include <iostream>
#include <cmath>
using namespace std;

// Quality question: check if a number is Armstrong.
int main() {
    int n, original, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    int temp = n;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    cout << n << (sum == original ? " is Armstrong." : " is not Armstrong.") << endl;
    return 0;
}
