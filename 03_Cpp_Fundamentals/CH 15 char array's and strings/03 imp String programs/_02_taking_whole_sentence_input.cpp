#include <cstring>
#include <iostream>

using namespace std;

int main() {
    //  this is the getline way to take input inside the array
    char word[30];
    cout << "enter your string here : " << endl;
    cin.getline(word, 30);// this includes the 3 most common fields and 
    
    cout << "your string was : " << word << endl;
    cout << "your string is of length : " << strlen(word) << endl;

    return 0;
}
