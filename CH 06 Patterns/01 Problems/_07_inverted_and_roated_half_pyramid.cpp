#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        //  inner loop 01: -> for the spaces
        for (int spc = 1; spc <= n - i; spc++) {
            cout << "#";
        }
        // inner loop : 02 -> for the star
        for (int str = 1; str <= i; str++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
