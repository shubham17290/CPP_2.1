#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Step 1: Spaces (proper pyramid alignment ke liye 2 spaces)
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Step 2: Numbers decreasing (i se 1 tak)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Step 3: Numbers increasing (2 se i tak)
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }

        cout << "\n";
    }

    return 0;
}
