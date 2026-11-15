#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creation of vector

    vector<int> marks;
    marks.reserve(10);
    marks.push_back(90);
    marks.push_back(91);
    marks.push_back(92);
    marks.push_back(93);
    cout << marks.max_size() << endl;
    for (int i : marks) {
        cout << i << endl;
    }
    cout << " size or capacity of vector is : " << marks.capacity() << endl;
    return 0;
}
