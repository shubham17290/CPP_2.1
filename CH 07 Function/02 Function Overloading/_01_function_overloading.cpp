//  lets see the function overloading
#include <iostream>
using namespace std;
int sum(int a, int b) {
    cout << (a + b) << endl;

    return a + b;
}
int sum(int a, int b, int c) {
    cout << (a + b + c) << endl;

    return a + b + c;
}
double sum(double a, double b) {
    cout << (a + b) << endl;

    return a + b;
}
int main() {
    sum(2, 3);
    sum(12, 13);
    sum(1.2, 1.3);
    sum(3, 4, 5);

    return 0;
}
