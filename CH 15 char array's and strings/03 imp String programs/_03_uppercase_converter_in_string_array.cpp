// a program to convert the lowecase charater to upper case chracter
#include <cstring>
#include <iostream>
using namespace std;

// void toUpper(char word[], int n);
/* {  for (int i = 0; i < n; i++) {
       if (word[i] >= 'a' && word[i] <= 'z') {
           word[i] = word[i] - 'a' + 'A';
       }
   }
}*/
void toUpper(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') // Check for the uppercase character
        {
            continue;
        } else {
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main() {
    char word[] = "ApPle";
    toUpper(word, strlen(word));
    cout << word << endl;
    return 0;
}
