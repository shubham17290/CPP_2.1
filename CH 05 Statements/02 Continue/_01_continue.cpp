#include <iostream>
using namespace std;
//  This continue statement helps to skip the conditioned stuff
int main() {
    int n;
    cout << "Enter the number  : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            continue;
        }

        cout << i << endl;
    }
    cout << "Loop is done : " << endl;
    return 0;
}
