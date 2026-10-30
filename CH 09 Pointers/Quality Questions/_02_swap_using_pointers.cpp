#include <iostream>
using namespace std;

// Quality question: swap two values using pointers.
void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 7, y = 14;
    cout << "Before: x=" << x << " y=" << y << endl;
    swapPtr(&x, &y);
    cout << "After:  x=" << x << " y=" << y << endl;
    return 0;
}
