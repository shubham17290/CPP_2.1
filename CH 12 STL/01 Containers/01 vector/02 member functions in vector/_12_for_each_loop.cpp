

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // creation of vector
    vector<int> first;
    vector<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    cout << "First vector elements are without swapping: ";
    //  here we are using for each loop to print the elements of vector
    //  traversing the vector using for each loop -> using for each loop we can traverse the vector
    //  without using index
    for (int i : first) {
        cout << i << " ";
    }
    cout << endl;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    for (int i : second) {
        cout << i << " ";
    }
    return 0;
}
