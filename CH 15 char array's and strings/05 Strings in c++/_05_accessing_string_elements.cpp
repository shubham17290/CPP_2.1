// accessing the string elements using the for loop
#include <iostream>
using namespace std;

int main() {
    string str = " Hi shubham sir how's is going !";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }

    cout << endl;
    return 0;
}
