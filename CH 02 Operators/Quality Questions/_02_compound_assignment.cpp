#include <iostream>
using namespace std;

// Quality question: use compound assignment operators to update a value.
int main() {
    int x = 10;
    x += 5;   // 15
    x *= 2;   // 30
    x -= 7;   // 23
    x /= 3;   // 7
    x %= 4;   // 3
    cout << "Final x = " << x << endl;
    return 0;
}
