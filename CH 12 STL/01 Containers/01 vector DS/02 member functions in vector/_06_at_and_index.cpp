#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creation of vector

    vector<int> marks;
    marks.push_back(90);
    marks.push_back(91);
    marks.push_back(92);
    marks.push_back(93);

    cout << " Size : " << marks.size() << endl;
    cout << " Element at index 0 : " << marks[0] << endl;
    cout << "Element at index 1: " << marks.at(1) << endl;

    return 0;
}
