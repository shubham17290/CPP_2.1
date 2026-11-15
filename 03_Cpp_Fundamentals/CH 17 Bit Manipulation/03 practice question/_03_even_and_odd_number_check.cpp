// _03_even_and_odd_number_check.cpp
#include <iostream>
using namespace std;
void oddOrEven(int nums) {
    if (!(nums & 1)) {
        cout << "Even " << endl;
    } else {
        cout << " odd " << endl;
    }
}
int main() {

    int nums;
    cout << " enter your number here to check : " << endl;
    cin >> nums;
    oddOrEven(nums);
    return 0;
}
