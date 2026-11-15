#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 40, 20, 50, 30};

    // First create max heap
    make_heap(v.begin(), v.end());

    // Sort heap
    sort_heap(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
