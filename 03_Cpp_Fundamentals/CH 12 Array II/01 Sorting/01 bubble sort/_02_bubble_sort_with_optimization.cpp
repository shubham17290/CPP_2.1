#include <iostream>
using namespace std;

//  function to print the sorted array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//  bubble sort logic code -> with optimization

void bubbleSort(int arr[], int n) {
    // Optimized bubble sort with early exit when no swaps occur
    for (int i = 0; i < n - 1; ++i) {
        bool isSwap = false; // tracks if any swap happened in this pass
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (!isSwap) {
            break;
        }
    }
    // Print the sorted array
    print(arr, n);
}
int main() {
    // int arr[5] = {5, 4, 1, 3, 2};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bubbleSort(arr, 10);
    cout << endl;

    return 0;
}
