//  wap to clear the ith bit of the number
/*
num = 15  ,
i = 2
*/
#include <iostream>
using namespace std;
void clearIbit(int num, int i) {
    int bitmask = (~0) << i;
    num = num & bitmask;
    cout << num << endl;
}

int main() {

    clearIbit(15, 2);

    return 0;
}
