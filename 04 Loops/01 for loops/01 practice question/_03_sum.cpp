#include <iostream>
using namespace std;
// Print the sum of the n natual numbers
int main() {
    int n;
    cout << "Enter your number  = " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum is  : " << sum << endl;

    return 0;
}
