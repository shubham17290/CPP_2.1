#include <iostream>
using namespace std;

// Quality question: print Pascal's triangle.
int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val = 1;
        for (int sp = 0; sp < n - i - 1; sp++) cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
