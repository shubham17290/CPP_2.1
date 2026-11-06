#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {

    // OUTPUT ITERATOR: write-only, single-pass, forward only
    // e.g. ostream_iterator, back_inserter

    ostream_iterator<int> out(cout, " ");
    cout << "Output iterator: ";
    for (int x : {10, 20, 30, 40, 50}) {
        *out = x;   // write
        ++out;      // advance
    }
    cout << endl;

    // back_inserter example
    vector<int> v;
    auto bi = back_inserter(v);
    *bi = 100; ++bi;
    *bi = 200; ++bi;

    cout << "back_inserter: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Supported: *itr = value, ++itr
    // Not supported: *itr (read), --itr, comparisons

    return 0;
}