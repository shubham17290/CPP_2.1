// accessing the string elements using the for loop
#include <iostream>
using namespace std;

int main() {
    string str = " Hi shubham sir how's is going !";
    for (int i : str) {
        cout << str[i] << "-";
    }

    cout << endl;
    return 0;
}
