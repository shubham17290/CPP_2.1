// strcmp(str1 , str2) : compares 2 strings based on values (-ve , 0 , +ve)
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str1[100] = "shubh mau";
    char str2[100] = "thubh how"; // mapping of the first character at the first please 's' - with
                                  // 't' say's " t>s" so now  str2>str1 -> -1

    int value = strcmp(str1, str2);
    cout << value << endl;

    return 0;
}
