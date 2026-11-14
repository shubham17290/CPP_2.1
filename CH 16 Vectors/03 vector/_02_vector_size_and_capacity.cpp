//  this is the dynamic array often called as the vector data structure
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //  way of initializing the vector
    // vector<int> vec1;

    vector<int> vec2 = {1, 2, 3, 4};

    //  check->

    cout << " Size before addition of element : " << vec2.size() << endl;
    cout << " Capacity before addition of element: " << vec2.capacity() << endl;
    //  addition
    vec2.push_back(5);
    vec2.push_back(6);
    // check ->
    cout << " Size after addition of element: " << vec2.size() << endl;
    cout << " Capacity after addition of element : " << vec2.capacity() << endl;

    return 0;
}
