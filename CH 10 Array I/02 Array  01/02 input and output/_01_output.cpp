#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 12, 13, 14, 15};
    // int n = sizeof(marks) / sizeof(marks[0]);
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        cout << "Value at " << i << " : " << arr[i] << endl;
    }

    return 0;
}
