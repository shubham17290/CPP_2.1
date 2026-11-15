#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {50, 40, 20, 10, 30};

    // Move largest element to the end
    pop_heap(v.begin(), v.end());

    // Actually remove it
    v.pop_back();

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
