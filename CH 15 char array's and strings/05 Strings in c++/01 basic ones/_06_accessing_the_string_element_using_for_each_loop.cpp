// accessing the string elements using the for loop
#include <iostream>
using namespace std;

int main() {
    string str = " Hi shubham sir how's is going !";
    for (char ch : str) {
        cout << ch << "-";
    }

    cout << endl;
    return 0;
}
