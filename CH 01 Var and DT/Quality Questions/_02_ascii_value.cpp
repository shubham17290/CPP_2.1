#include <iostream>
using namespace std;

// Quality question: print ASCII value of a character and vice versa.
int main() {
    char ch = 'A';
    cout << "ASCII of " << ch << " = " << (int)ch << endl;

    int code = 97;
    cout << "Character of " << code << " = " << (char)code << endl;
    return 0;
}
