//  starting with the vector functions
#include <iostream>
#include <vector>
using namespace std;
//  pop back concept:
int main() {
    vector<int> vec;
    cout << "size = " << vec.size() << endl;
    // adding element inside the vector data structure
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);
    vec.push_back(29);
    vec.push_back(30);
    vec.push_back(31);
    cout << "size  is now after the push_back opetration = " << vec.size() << endl;
    //  lets print the vectors elements

    vec.pop_back(); // 31 deleted
    vec.pop_back(); // 30 deleted
    vec.pop_back(); // 29 deleted
    vec.pop_back(); // 28 deleted
    vec.pop_back(); // 27 deleted
    vec.pop_back(); // 26 deleted
    vec.pop_back(); // 25 deleted
    for (int val : vec) {
        cout << val << endl;
    }
    cout << "size  is now after the pop_back opetration = " << vec.size() << endl;
    // cout << vec[0];  -> this is a piece of exception!
    return 0;
}
