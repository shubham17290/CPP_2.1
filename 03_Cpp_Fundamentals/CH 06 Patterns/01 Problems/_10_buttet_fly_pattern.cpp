#include <iostream>
using namespace std;

void printButterfly(int n) {
    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++)
            cout << "*";
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        // Right stars
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++)
            cout << "*";
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        // Right stars
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}

int main() {
    int n = 4;
    printButterfly(n);
    return 0;
}
