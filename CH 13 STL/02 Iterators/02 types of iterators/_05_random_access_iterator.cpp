#include <iostream>
#include <vector>
using namespace std;

int main() {

    // RANDOM ACCESS ITERATOR: read/write, multi-pass, O(1) jump
    // e.g. vector, deque, array, pointer iterators

    vector<int> v = {10, 20, 30, 40, 50};
    auto itr = v.begin();

    cout << "itr[2] = " << itr[2] << endl;        // 30
    cout << "*(itr+3) = " << *(itr + 3) << endl; // 40
    cout << "distance = " << (itr + 2 - itr) << endl; // 2

    auto last = v.end() - 1;
    cout << "last = " << *last << endl;          // 50

    itr[1] = 999;
    cout << "After itr[1]=999: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Supported: *itr, *itr=value, ++,--, +n,-n, [], <,<=,>,>=
    // All operations O(1)

    return 0;
}