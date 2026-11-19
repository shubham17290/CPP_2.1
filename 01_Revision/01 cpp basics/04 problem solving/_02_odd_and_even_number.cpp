#include <iostream>
using namespace std;

int main() {
    //  check the number is even or odd
    cout << "enter the number  :" << endl;
    int n;
    cin >> n;
    // == is the comparision operator
    //  logic for even
    if (n % 2 == 0) {
        cout << "even :";
    }
    if (n % 2 == 1) {
        cout << " odd : ";
    }
    return 0;
}
