#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {40, 10, 30, 20};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " "; // Output: 10 20 30 40
    return 0;
}
