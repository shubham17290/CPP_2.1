//  Write a function which takes 2 nnumbers as parameters (a & b) and output: a^2 + b^2 + 2*a*b.
#include <iostream>
using namespace std;

int calculate(int a, int b) { return a * a + b * b + 2 * a * b; }

int main() {
    cout << calculate(2, 3);
    return 0;
}
