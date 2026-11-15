//  Print all prime in a range 2 to n;
#include <iostream>
using namespace std;
bool isPrime(int n) {
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
//  primt all prime number from 2 to n
void allPrimes(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) { // true
            cout << i << endl;
            count += 1;
        }
    }
    cout << "Total Prime numbers : " << count << endl;
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    allPrimes(n);

    return 0;
}
