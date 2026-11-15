#include <iostream>
using namespace std;

// Quality question: check vowel or consonant using switch.
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << ch << " is a vowel." << endl; break;
        default:
            if (isalpha(ch)) cout << ch << " is a consonant." << endl;
            else cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}
