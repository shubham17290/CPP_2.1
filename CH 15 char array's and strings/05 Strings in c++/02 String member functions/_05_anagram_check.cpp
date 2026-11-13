// WAP to check if the given string is an anagram or not!
#include <iostream>
#include <string>
using namespace std;

bool isanagram(string str1, string str2) {
    // Fix 1: str1.length  →  str1.length()
    // Fix 2: str2.lenght() →  str2.length()   (typo)
    if (str1.length() != str2.length()) {
        cout << "Not valid anagram : " << endl;
        return false;
    }

    // Step 01: count frequency of each character of str1
    int count[26] = {0};
    for (int i = 0; i < (int)str1.length(); i++) {
        // Fix 3: str[i]  →  str1[i]
        // Fix 4: count[]++  →  count[idx]++
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // Step 02: decrement the count using str2's characters
    for (int i = 0; i < (int)str2.length(); i++) {
        int idx = str2[i] - 'a';
        if (count[idx] == 0) {
            cout << "not valid anagram" << endl;
            return false;
        }
        count[idx]--;
    }

    cout << "valid anagram" << endl;
    // Fix 5: missing return statement (undefined behavior otherwise)
    return true;
}

int main() {
    string str1 = "anagram";
    string str2 = "nagaram";

    isanagram(str1, str2);

    return 0;
}
