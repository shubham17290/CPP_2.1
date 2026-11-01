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
    if (marks.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }
    return 0;
}
