#include <iostream>
using namespace std;

// Quality question: compute GCD and LCM of two numbers.
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int g = gcd(a, b);
    cout << "GCD = " << g << endl;
    cout << "LCM = " << (a * b) / g << endl;
    return 0;
}
