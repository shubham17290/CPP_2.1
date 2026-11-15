#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    reverse(v.begin(), v.end());

    for (int x : v)
        cout << x << " "; // Output: 4 3 2 1
    return 0;
}
