#include <iostream>
using namespace std;
//  sum of the digits of the number
int main() {
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    int digSum = 0;

    while (n != 0) {

        int lastdig = n % 10;

        digSum += lastdig;

        n = n / 10;
    }
    cout << "sum = " << digSum << endl;
    return 0;
}
