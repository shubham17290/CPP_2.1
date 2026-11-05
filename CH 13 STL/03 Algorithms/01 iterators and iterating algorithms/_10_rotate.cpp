#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Index 2 (value 30) ko pehla element bana dega
    rotate(v.begin(), v.begin() + 2, v.end());

    for (int x : v)
        cout << x << " "; // Output: 30 40 50 10 20
    return 0;
}
