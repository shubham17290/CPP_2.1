#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines | rows : " << endl;
    cin >> n;
    //  Outer loop
    for (int i = 1; i <= n; i++) {
        //  inner loop
        for (int j = 1; j <= i; j++) {
            cout << "*" << " "; /// actual work inside the inner loop
        }
        cout << endl;
    }

    return 0;
}
