#include <iostream>
using namespace std;
int main() {

    /*bool isAdult; // 1 , 0
    int age;
    cout << "enter you age :" << endl;
    cin >> age;

    if (age >= 18) {
        isAdult = true;
    } else {
        isAdult = false;
    }
    isAdult = age >= 10 ? true : false;
    //  Largest of two numbers
*/
    int a = 10;
    int b = 5;
    int largest = a >= b ? a : b;
    cout << "largest is " << largest << endl;

    return 0;
}
