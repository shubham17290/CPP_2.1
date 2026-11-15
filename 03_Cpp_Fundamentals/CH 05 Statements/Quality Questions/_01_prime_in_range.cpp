#include <iostream>
using namespace std;

// Quality question: print primes in a range using break/continue.
int main() {
    int low, high;
    cout << "Enter range (low high): ";
    cin >> low >> high;

    for (int n = low; n <= high; n++) {
        if (n < 2) continue;
        bool prime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) { prime = false; break; }
        }
        if (prime) cout << n << " ";
    }
    cout << endl;
    return 0;
}
