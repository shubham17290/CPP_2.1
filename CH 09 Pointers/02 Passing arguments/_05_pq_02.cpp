#include <iostream>
using namespace std;

void multiplebby2(int &a, int &b, int &c) {
    a *= 2;
    b *= 2;
    c *= 2;
}
int main() {
    int x = 1, y = 2, z = 3;
    multiplebby2(x, y, z);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
