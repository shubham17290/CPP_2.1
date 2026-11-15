#include <iostream>
using namespace std;

// Quality question: print a centered number pyramid.
int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int sp = 0; sp < n - i; sp++) cout << " ";
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }
    return 0;
}
