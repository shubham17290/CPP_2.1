#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // Count even numbers
    int cnt = count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });

    cout << "Even count: " << cnt << "\n"; // Output: 3
    return 0;
}
