#include <iostream>
using namespace std;

// Function to print the sorted array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Logic of the insertion sort
void insertionsort(int arr[], int n) {

    for (int i = 1; i < n; ++i) {

        int curr = arr[i];
        int prev = i - 1;

        // Swap elements until curr reaches its correct position
        while (prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev + 1]);
            --prev;
        }
    }

    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};

    insertionsort(arr, 5);

    return 0;
}
