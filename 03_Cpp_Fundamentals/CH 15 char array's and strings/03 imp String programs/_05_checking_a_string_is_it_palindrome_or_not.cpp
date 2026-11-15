// The program to check the string is palindrome or not !
#include <cstring>
#include <iostream>
using namespace std;
bool isPalindrome(char str[], int n) {
    int st = 0, end = n - 1;
    while (st < end) {
        if (str[st] != str[end]) {
            cout << "not a valid palindrome\n";
            return false;
        }
        st++;
        end--;
    }
    cout << "this is valid palindrom " << endl;
    return true;
}

int main() {
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
    cout << word << endl;
    return 0;
}
