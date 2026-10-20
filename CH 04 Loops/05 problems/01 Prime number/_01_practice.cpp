#include <iostream>
using namespace std;
//  Check if a number is prime or not !
int main() {
    int n;
    cout << "Entere the number : " << endl;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Number is Prime" << endl;
    } else {
        cout << "Number is Composite number " << endl;
    }

    return 0;
}
