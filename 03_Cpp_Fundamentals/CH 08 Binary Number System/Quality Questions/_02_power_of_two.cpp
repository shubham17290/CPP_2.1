#include <iostream>
using namespace std;

// Quality question: check if a number is a power of two.
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << n << (isPowerOfTwo(n) ? " is " : " is not ") << "a power of two." << endl;
    return 0;
}
