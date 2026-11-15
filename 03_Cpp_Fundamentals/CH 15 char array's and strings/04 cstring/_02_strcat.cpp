//  strcat(str1 , str2) : to concatenate / join str1 with str2

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str1[100] = " Hi darling ";
    char str2[100] = "would you like to go on a date with me ?";

    strcat(str1, str2);
    cout << str2 << endl;

    return 0;
}
