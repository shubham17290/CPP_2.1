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
    cout << "size of vector before pop_back() function: " << marks.size() << endl;
    // printing the elements of vector

    /* for (int i : marks) {
            cout << i << endl;
        }*/

    //  now let's remove the last element of vector using pop_back() function
    marks.pop_back();
    marks.pop_back();

    cout << "After removing the last two elements of vector: " << endl;

    for (int i : marks) {
        cout << i << endl;
    }
    cout << "size of vector after pop_back() function: " << marks.size() << endl;
    return 0;
}
