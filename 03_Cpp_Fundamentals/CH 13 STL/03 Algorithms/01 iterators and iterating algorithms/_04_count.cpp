#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 2, 4};

    int cnt = count(v.begin(), v.end(), 2);
    cout << "Count of 2: " << cnt << "\n"; // Output: 3

    return 0;
}
