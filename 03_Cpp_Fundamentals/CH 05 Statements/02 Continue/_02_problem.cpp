#include <iostream>
using namespace std;
//  WAPT to show numbers entered by user except multiples of 10.
int main() {

    int n;

    do {
        cout << "Enter number :  ";
        cin >> n;
        if (n % 10 == 0) {
            continue;
        }
        cout << "you entered " << n << endl;
    } while (true);

    return 0;
}
