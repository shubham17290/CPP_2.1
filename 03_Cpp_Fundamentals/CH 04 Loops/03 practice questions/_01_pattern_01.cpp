#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "enter row : " << endl;
    cin >> m;
    int n;
    cout << "enter column : " << endl;
    cin >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
