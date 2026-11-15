//  strcpy(dest , src) : to copy string from src to dest
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str1[100];
    char str2[100] = "apna college";
    // str 1 = "apna college";
    strcpy(str1, str2);
    cout << str1 << endl;

    return 0;
}
