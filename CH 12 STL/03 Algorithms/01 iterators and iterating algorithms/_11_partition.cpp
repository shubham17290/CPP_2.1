#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Even numbers aage, odd peeche
    partition(v.begin(), v.end(), [](int x) { return x % 2 == 0; });

    for (int x : v)
        cout << x << " "; // Example output: 6 2 4 3 5 1
    return 0;
}
