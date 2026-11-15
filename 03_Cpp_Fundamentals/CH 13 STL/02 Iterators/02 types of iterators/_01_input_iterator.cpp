#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    // INPUT ITERATOR: read-only, single-pass, forward only
    // e.g. istream_iterator, find() result

    string data = "1 2 3 4 5";
    istringstream iss(data);
    istream_iterator<int> in(iss), eof;

    cout << "Input iterator: ";
    while (in != eof) {
        cout << *in << " ";   // read
        ++in;                 // advance
    }
    cout << endl;

    // Supported: *itr, ++itr, ==, !=
    // Not supported: --itr, itr+n, itr[n], <

    return 0;
}