#include <iostream>
using namespace std;
//  convert binary to decimal
void binToDec(int binNum) {
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0 , 2^1 , 2^2...

    while (n > 0) {
        int lastdig = n % 10;
        decNum += lastdig * pow;
        pow = pow * 2;

        n = n / 10;
    }
    cout << decNum << endl;
}
//  convert decimal to binary
void decToBin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 10^0 , 10^1 , 10^2...

    while (n > 0) {
        int rem = n % 2;
        binNum += rem * pow;
        pow = pow * 10;

        n = n / 2;
    }
    cout << binNum << endl;
}
int main() {
    decToBin(10);

    return 0;
}