#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creation of vector

    vector<int> marks(5, 99);

    cout << *(marks.begin()) << endl;
    

    return 0;
}
