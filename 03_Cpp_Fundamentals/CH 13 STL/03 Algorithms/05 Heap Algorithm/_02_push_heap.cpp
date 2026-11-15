#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {50, 40, 20, 10, 30};

    // Insert new element
    v.push_back(60);

    // Restore max heap
    push_heap(v.begin(), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
