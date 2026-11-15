//  count set bit
#include <iostream>
using namespace std;
//  i will be back on this soon !
int countsetbits(int num) {
    int count = 0;
    while (num > 0) {
        int lastdig = num & 2;
        count += lastdig;
        num = num >> 1;
    }
    cout << count << endl;
    return 0;
}
int main() {
    countsetbits(7);
    return 0;
}
