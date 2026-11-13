//  string comparision program

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "cat";
    string str2 = " bat";
    cout << (str1 == str2) << endl;
    cout << (str1 > str2) << endl;
    cout << (str1 < str2) << endl;
    //  doing this is not possible in the character array , so alway's prefer the string data type
    //  over character array !

    return 0;
}
