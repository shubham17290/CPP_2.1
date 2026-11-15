//  this is the dynamic array often called as the vector data structure
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //  way of initializing the vector
    // vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4};
    vector<int> vec3(5, -1);
    //  accessing the second vector
    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << "\n";
    }
    cout << endl;
    //  accessing the third vector
    for (int i = 0; i < vec3.size(); i++) {
        cout << vec3[i] << "\n";
    }

    return 0;
}
