#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
    // 1. If lengths are different, they can never be made equal
    if (s1.length() != s2.length()) {
        return false;
    }

    // 2. If they are already equal, 0 swaps are needed ("at most one" is satisfied)
    if (s1 == s2) {
        return true;
    }

    int diffCount = 0;
    int firstIdx = -1;
    int secondIdx = -1;

    // 3. Find the mismatched indices
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            diffCount++;
            if (diffCount == 1) {
                firstIdx = i; // store first mismatch
            } else if (diffCount == 2) {
                secondIdx = i; // store second mismatch
            } else {
                // More than 2 mismatches -> impossible with 1 swap
                return false;
            }
        }
    }

    // 4. If exactly 2 mismatches, check if swapping fixes them
    if (diffCount == 2) {
        return (s1[firstIdx] == s2[secondIdx] && s1[secondIdx] == s2[firstIdx]);
    }

    // If there is only 1 mismatch, it can't be fixed with one swap
    return false;
}

int main() {
    // Example from the image
    string s1 = "bank";
    string s2 = "kanb";

    // boolalpha prints 'true'/'false' instead of '1'/'0'
    cout << boolalpha << areAlmostEqual(s1, s2) << endl;

    return 0;
}
