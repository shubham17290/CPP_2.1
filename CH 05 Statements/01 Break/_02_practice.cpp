#include <iostream>
using namespace std;
//  WAP Where wser can keep entering numbers till they enter a multiple of 10.
int main() {
    int n;
    do {
        cout << "enter number : ";
        cin >> n;
        if (n % 10 == 0) {
            break;
        }
        cout << " You entered : " << n << endl;

    } while (true); // infinite loop

    return 0;
}
