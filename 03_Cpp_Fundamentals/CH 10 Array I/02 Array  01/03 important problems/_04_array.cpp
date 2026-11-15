#include <iostream>
using namespace std;

void printArray(int arr[] /* pointer hai ye bhai  ! */, int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , ";
    }
    cout << endl;
}
int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);

    return 0;
}
