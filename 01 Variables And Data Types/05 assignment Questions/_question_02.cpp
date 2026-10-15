/*
Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
problem)
 */
#include <iostream>
using namespace std;

int main() {
    float pencil;
    float pen;

    float eraser;
    cout << "Enter the cost of pencil : ";
    cin >> pencil;
    cout << "Enter the cost of pen: ";
    cin >> pen;

    cout << "Enter the cost of eraser : ";
    cin >> eraser;
    float total;
    total = pencil + pen + eraser ;
    cout << "Your total cost is : Rs." << total << " sir" << endl;

    return 0;
}
