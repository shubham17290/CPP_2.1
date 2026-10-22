#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int binCoeff(int n, int r) {
    int val_1 = factorial(n);
    int val_2 = factorial(r);
    int val_3 = factorial(n - r);
    int result = val_1 / (val_2 * val_3);
    return result;
}

int main() {
    cout << binCoeff(4, 2) << endl;

    return 0;
}
