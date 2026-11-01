
#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creation of vector

    vector<int> marks;
    // marks.reserve(10);
    marks.push_back(90);
    marks.push_back(91);
    marks.push_back(92);
    marks.push_back(93);

    for (int i : marks) {
        cout << i << endl;
    }

    marks.clear();
    cout << marks.size() << endl;

    return 0;
}
