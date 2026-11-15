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

    cout << " The size of the vector is : " << marks.size() << endl;
    cout << "The first element of the vector is :" << marks.front() << endl;
    cout << "The last element of the vector is :" << marks.back() << endl;

    return 0;
}
