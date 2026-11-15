//  this is home work for me ...
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 30, 30, 40};

    // Finds all occurrences of 30 in one go
    auto range = equal_range(v.begin(), v.end(), 30);
    auto first = range.first;
    auto last = range.second; // C++11/C++14 compatible

    // [first, last) acts like a mini sub-vector of just the 30s
    for (auto it = first; it != last; ++it) {
        cout << *it << " "; // Output: 30 30 30
    }

    cout << "\nCount: " << (last - first); // Output: Count: 3

    return 0;
}
