/*
Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)
Output : (P*R*T) / 100
*/
#include <iostream>
using namespace std;

int main() {
    float principle;
    float rate;

    float time;
    cout << "Enter the principle : ";
    cin >> principle;
    cout << "Enter the rate : ";
    cin >> rate;

    cout << "Enter the time : ";
    cin >> time;
    float _si_;
    _si_ = (principle + rate + time) / 100;
    cout << "Simple interest is : Rs." << _si_ << " sir" << endl;

    return 0;
}
