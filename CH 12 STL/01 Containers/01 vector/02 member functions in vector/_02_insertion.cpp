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
    marks.push_back(94);
    marks.push_back(95);
    marks.push_back(96);
    marks.push_back(97);
    marks.push_back(98);
    marks.push_back(99);

    // printing the elements of vector

    for (int i : marks) {
        cout << i << endl;
    }
    return 0;
}
