//  problem no 01
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of row: " << endl;
    cin >> n;
    int i;
    // outer loop
    for (i = 1; i <= n; i++) {
        // inner loop
        for (int j = 1; j <= n; j++) {
            // work-> actuall printable task hers
            cout << i << " "; // this will print the outer loop number iterated value
        }

        cout << endl; // this will add new line after each iteration inside the inner loop
    }
    cout << i << endl;

    return 0;
}
