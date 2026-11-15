/*
Question 1 : In a program, input the side of a square. You have to output the area of
the square.
Input : n (side)
Output : n*n (area)
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the side of the square : " << endl;
    cin >> n;
    int square;
    square = n * n;
    cout << "the area of the square is : " << square << endl;

    return 0;
}
