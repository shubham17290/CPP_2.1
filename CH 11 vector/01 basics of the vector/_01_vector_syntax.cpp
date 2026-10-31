#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};

    cout << vec[0] << endl; // accessing-> 1

    vector<int> vec2(5, 2);

    cout << vec2[0] << endl; // 2

    cout << vec2[1] << endl; // 2

    cout << vec2[2] << endl; // 2

    cout << vec2[3] << endl; // 2
    cout << vec2[4] << endl; // 2

    return 0;
}
