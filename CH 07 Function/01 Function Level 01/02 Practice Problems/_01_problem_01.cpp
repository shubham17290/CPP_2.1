
//  WAF to find the product of 2 numbers : a & b
#include <iostream>
using namespace std;

int prod(int a, int b) { // parameters passing
    int pdct = a * b;
    return pdct;
}
int main() {

    int mult = prod(5, 3); // argument passing

    cout << "Product of a number is : " << mult << endl;
    return 0;
}
