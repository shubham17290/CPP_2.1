#include <iostream>
using namespace std;
//  print the sum of odd digits of a number using while loop;
int main() {
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    int digSum = 0;

    while (n != 0) {

        int lastdig = n % 10;

        if (lastdig % 2 != 0) {
            digSum += lastdig;
        }

        n = n / 10;
    }

    cout << "sum of odd digits = " << digSum << endl;
    return 0;
}
