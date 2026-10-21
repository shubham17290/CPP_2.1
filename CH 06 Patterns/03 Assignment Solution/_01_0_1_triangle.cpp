#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Even sum par 1, odd sum par 0
            if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << "\n";
    }

    return 0;
}
