#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows : " << endl;
    cin >> n;
    // char ch = 'A';
    int c = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {

            c = j;
            c = c + 64;
            cout << char(c) << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}
