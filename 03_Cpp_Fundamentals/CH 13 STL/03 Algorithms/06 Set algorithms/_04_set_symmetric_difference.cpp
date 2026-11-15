#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};
    vector<int> result;

    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    for (int x : result)
        cout << x << " ";

    return 0;
}
