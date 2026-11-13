#include <iostream>
#include <string>

using namespace std;

int main() {
    // way 2 to take input in the string->

    string str; // string initialization
    cout << "enter your string sir here : " << endl;
    getline(cin, str); // input le raha hai ye ...
    /*getline(cin , string_name , delimitor variable )*/
    // delimitor variable are the one who -> use to stop the code at the defined sign or condition
    cout << str << endl;
    return 0;
}
