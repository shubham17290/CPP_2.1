#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    auto it = find(v.begin(), v.end(), 20);

    if (it != v.end())
        cout << "Found: " << *it << "\n";
    else
        cout << "Not Found\n";

    return 0;
}
