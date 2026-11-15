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
    cout << "Capacity of vector before adding element : " << marks.capacity() << endl;

    marks.push_back(94);

    //     lets see the capacity of vector using capacity() function
    cout << "Capacity of vector after adding element : " << marks.capacity() << endl;

    return 0;
}
