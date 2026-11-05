#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 1, 2, 2, 3, 3, 4};

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int x : v)
        cout << x << " "; // Output: 1 2 3 4
    return 0;
}
