#include <cstring>
#include <iostream>

using namespace std;

int main() {
    //  this is the normal way to put input inside the character array
    char word[30];
    cout << "enter your word : " << endl;
    cin >> word;
    cout << "your word was : " << word << endl;
    cout << "your word was : " << strlen(word) << endl;

    return 0;
}
