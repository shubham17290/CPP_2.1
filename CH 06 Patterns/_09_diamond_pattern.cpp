#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of row's : " << endl;
    cin >> n;
    //  First half pyramid -> outer loop
    for (int i = 1; i <= n; i++) {
        // this inner loop
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // second pyramid
    for (int i = n; i >= 1; i--) {
        //  Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //  stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
