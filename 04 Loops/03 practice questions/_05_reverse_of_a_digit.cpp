#include <iostream>
using namespace std;
//  print the input numbers in the reverse order :
int main() {
    int n;
    cout << "Enter number : " << endl;
    cin >> n;

    while (n != 0) {

        int lastdig = n % 10;  // extract the last digits
        cout << lastdig << ""; // will print the last digits
        n = n / 10;            // will delete the last digit
    }
    cout << endl; //  i need to learn the meaning of this shit --> it is must to know !
    return 0;
}
