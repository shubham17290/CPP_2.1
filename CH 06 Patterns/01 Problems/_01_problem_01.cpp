//  problem no 01
#include <iostream>
using namespace std;
int main() {
    /*int n;
    cout << "Enter number of row: " << endl;
    cin >> n; */

    // outer loop
    for (int i = 1; i <= 4; i++) {
        // inner loop
        for (int j = 1; j <= 4; j++) {
            // work-> actuall printable task hers
            cout << i << " "; // this will print the outer loop number iterated value
        }

        cout << endl; // this will add new line after each iteration inside the inner loop
    }

    return 0;
}
