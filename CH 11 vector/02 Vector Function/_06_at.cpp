//  starting with the vector functions
#include <iostream>
#include <vector>
using namespace std;
// at concept:
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

    cout << vec.at(2) << endl;

    return 0;
}
