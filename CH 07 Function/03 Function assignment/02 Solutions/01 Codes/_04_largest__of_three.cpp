//  WAF that prints the largest of the three numbers
#include <iostream>
using namespace std;
int largest(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main() {
    cout << largest(10, 25, 15);
    return 0;

    return 0;
}
