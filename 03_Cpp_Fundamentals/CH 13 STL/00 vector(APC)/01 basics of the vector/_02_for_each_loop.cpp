//  using for each loop iterating inside the vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};
    /*//  this the for each loop :
    for (int i : vec) {
        cout << "the value at index : " << vec[i] << " is " << i << endl;
    }*/
    vector<char> ch = {'a', 'b', 'c', 'd', 'e'};
    for (char val : ch) {
        cout << val << endl;
    }

    return 0;
}
