#include <iostream>
using namespace std;

// Quality question: check whether a year is a leap year.
int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    cout << year << (isLeap ? " is a leap year." : " is not a leap year.") << endl;
    return 0;
}
