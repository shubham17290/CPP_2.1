//  starting with the vector functions
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "sixe = " << vec.size() << endl;
    // adding element inside the vector data structure
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.push_back(28);
    vec.push_back(29);
    vec.push_back(30);
    vec.push_back(31);
    cout << "sixe = " << vec.size() << endl;
    //  lets print the vectors elements
    for (int val : vec) {
        cout << val << endl;
    }
    return 0;
}
