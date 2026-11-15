#include <iostream>
using namespace std;

int getithbit(int num, int i) {
    int bitmask = 1 << i;
    if (!(num & bitmask)) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    cout << getithbit(7, 2) << endl;
    return 0;
}
