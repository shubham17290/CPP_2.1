#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Step 1: Leading spaces (n - i)
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Step 2: n stars
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
