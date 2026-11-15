#include <iostream>
#include <forward_list>
using namespace std;

int main() {

    // FORWARD ITERATOR: read/write, multi-pass, forward only
    // e.g. forward_list iterator

    forward_list<int> fl = {10, 20, 30, 40, 50};

    cout << "Forward: ";
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // modify in place
    for (auto it = fl.begin(); it != fl.end(); ++it)
        *it += 5;

    cout << "After +5: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // Supported: *itr, *itr=value, ++itr, ==, !=
    // Not supported: --itr, itr+n, itr[n], <

    return 0;
}