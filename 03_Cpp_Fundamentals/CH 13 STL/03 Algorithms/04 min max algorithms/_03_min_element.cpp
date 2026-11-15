#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {40, 10, 50, 20, 30};

    auto it = min_element(v.begin(), v.end());

    cout << *it;

    return 0;
}
