//  wap using the bitwise operators to check if the number is power of two(2) or not !
#include <iostream>
using namespace std;

bool ispowerof_2(int num) {
    if (!(num & (num - 1))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << ispowerof_2(2) << endl;
    cout << ispowerof_2(4) << endl;
    cout << ispowerof_2(17) << endl;
    cout << ispowerof_2(35) << endl;
    return 0;
}
