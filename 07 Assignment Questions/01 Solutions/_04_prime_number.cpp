#include <iostream>
using namespace std;

/*Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
(Assume N >= 2)*/
int main() {
    int n;
    cout << "Enter N (N >= 2): ";
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are: ";

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
