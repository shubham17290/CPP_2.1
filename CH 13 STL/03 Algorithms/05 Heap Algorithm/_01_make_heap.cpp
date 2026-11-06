#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 40, 20, 50, 30};

    make_heap(v.begin(), v.end());

    cout << "Max Heap: ";

    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nLargest element: " << v.front();

    return 0;
}
