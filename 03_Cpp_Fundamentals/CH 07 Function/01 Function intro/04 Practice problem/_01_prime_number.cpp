#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) { // non-prime
            return false;
        }
        return true;
    }
}

//  Logic : 02 --> time saver will going to follow in the future picks
bool isPrime2(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter your number buddy : " << endl;

    cin >> n;
    cout << isPrime(n) << endl;
    cout << isPrime2(n) << endl;

    return 0;
}
