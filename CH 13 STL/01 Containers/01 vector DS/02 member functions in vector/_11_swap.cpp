

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> first;
    vector<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    cout << "First vector elements are without swapping: ";
    for (int i : first) {
        cout << i << " ";
    }
    cout << endl;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    cout << "Second vector elements are without swapping: ";
    for (int i : second) {
        cout << i << " ";
    }
    cout << endl;

    first.swap(second);
    cout << "After swapping, first vector elements are: ";
    for (int i : first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "After swapping, second vector elements are: ";
    for (int i : second) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
