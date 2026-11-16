//  bitwise and operator
#include <iostream>
using namespace std;

int main() {
    //  bitwise -> &
    int a = 10;                                      // 1010
    int b = 15;                                      // 1111
    int c = a & b;                                   // 1010
    cout << "bitwise and operation : " << c << endl; // 10 (1010)

    return 0;
}
