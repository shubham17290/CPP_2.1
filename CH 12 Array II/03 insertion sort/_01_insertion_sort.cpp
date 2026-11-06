
#include <iostream>
using namespace std;
//  function to print the sorted array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// logic of the insertion sort
void insertionsort(int arr[], int n) {

    for (int i = 1; i < n; ++i) {
        int curr = arr[i]; // element to insert
        int prev = i - 1;
        // Shift elements greater than curr to the right
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            --prev;
        }
        // Insert curr at its correct position
        arr[prev + 1] = curr;
    }
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    insertionsort(arr, 5);

    return 0;
}
