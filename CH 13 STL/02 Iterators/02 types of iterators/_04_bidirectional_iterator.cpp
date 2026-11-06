#include <iostream>
#include <list>
using namespace std;

int main() {

    // BIDIRECTIONAL ITERATOR: read/write, multi-pass, forward & backward
    // e.g. list, set, map iterators

    list<int> l = {10, 20, 30, 40, 50};

    cout << "Forward: ";
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Backward: ";
    auto it = l.end();
    while (it != l.begin()) {
        --it;
        cout << *it << " ";
    }
    cout << endl;

    // Supported: *itr, *itr=value, ++itr, --itr, ==, !=
    // Not supported: itr+n, itr[n], <

    return 0;
}