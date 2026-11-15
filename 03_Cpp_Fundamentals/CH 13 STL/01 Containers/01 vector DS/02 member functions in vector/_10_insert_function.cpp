

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
    cout << marks.size() << endl;
    marks.insert(marks.begin(), 95);

    cout << marks[0] << endl;

    cout << marks.size() << endl;

    marks.erase(marks.begin(), marks.end());
    cout << marks.size() << endl;
    return 0;
}
