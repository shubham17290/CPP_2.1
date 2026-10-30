#include <iostream>
using namespace std;

// Quality question: remove duplicates from a sorted array.
int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) arr[++j] = arr[i];
    }
    int newSize = j + 1;
    cout << "Unique elements: ";
    for (int i = 0; i < newSize; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
