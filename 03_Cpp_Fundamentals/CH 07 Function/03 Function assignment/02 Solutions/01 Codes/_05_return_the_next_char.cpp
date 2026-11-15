//  waf to return the next character in the alphabet

#include <iostream>
using namespace std;

char nextChar(char ch) {
    if (ch == 'z')
        return 'a';

    return ch + 1;
}

int main() {
    cout << nextChar('c') << endl;
    cout << nextChar('z');

    return 0;
}
