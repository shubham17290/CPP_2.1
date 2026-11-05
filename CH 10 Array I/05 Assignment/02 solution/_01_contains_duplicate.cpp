#include <iostream>
using namespace std;

// Question 1 : Contains Duplicate (EASY)
// Given an integer array nums, return true if any value appears at least
// twice, and false if every element is distinct.
// Most basic array approach: compare every pair of elements (O(n^2)).
bool containsDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a1[] = {1, 2, 3, 4};
    cout << "Test 1: " << (containsDuplicate(a1, 4) ? "true" : "false") << endl; // false

    int a2[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << "Test 2: " << (containsDuplicate(a2, 10) ? "true" : "false") << endl; // true

    return 0;
}
