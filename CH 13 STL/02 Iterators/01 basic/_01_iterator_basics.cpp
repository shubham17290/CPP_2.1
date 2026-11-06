#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // Iterator declaration
    vector<int>::iterator itr;
    vector<int>::iterator itr1;

    itr = v.begin();      // Points to first element
    itr1 = v.begin() + 2; // Points to third element

    // 1. *itr : Access current element
    cout << *itr << endl; // 10

    // 2. itr->m : Access member of pointed object
    // Example: itr->second for map iterators

    // 3. ++itr : Move to next position
    ++itr;
    cout << *itr << endl; // 20

    // 4. --itr : Move to previous position
    --itr;
    cout << *itr << endl; // 10

    // 5. itr + 1 : Move forward by one position
    cout << *(itr + 1) << endl; // 20

    // 6. itr1 == itr : Check same position
    cout << (itr1 == itr) << endl; // 0 (false)

    // 7. itr1 != itr : Check different positions
    cout << (itr1 != itr) << endl; // 1 (true)

    // 8. itr = itr1 : Assign one iterator to another
    itr = itr1;
    cout << *itr << endl; // 30

    return 0;
}
