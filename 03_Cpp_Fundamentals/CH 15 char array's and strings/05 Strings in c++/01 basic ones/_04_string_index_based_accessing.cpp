#include <iostream>
#include <string>

using namespace std;

int main() {
    // way 2 to take input in the string->

    string str; // string initialization
    cout << "enter your string sir here : " << endl;
    getline(cin, str, '!'); // input le raha hai ye ...
    cout << str[0] << endl;
    cout << str[2] << endl;
    cout << str[5] << endl;
    cout << str[8] << endl;

    cout << str << endl;
    return 0;
}
