#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 8, 9};

    // Pehla even number
    auto it = find_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });

    if (it != v.end())
        cout << "First even: " << *it << "\n"; // Output: 8

    return 0;
}
