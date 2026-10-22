//  In this program we are going to see the forward declaration

#include <iostream>
using namespace std;

void sayhello(); // this is called forward function declaration !
int main() {
    sayhello(); // function call !
    return 0;
}

void sayhello() { cout << "Hello :) darling.." << endl; }
