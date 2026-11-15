#include <iostream>
using namespace std;

int main() {
    int income;
    cout << "Enter your Income sir : " << endl;
    cin >> income;
    if (income < 5) {
        cout << " your tax is 0 %" << endl;
    } else if (income >= 5 && income <= 10) {
        cout << "your tax is 20 %" << endl;
    } else if (income >= 10) {
        cout << " you tax is 30 %" << endl;
    } else {
        cout << " I think something is wrong" << endl;
    }
    return 0;
}
