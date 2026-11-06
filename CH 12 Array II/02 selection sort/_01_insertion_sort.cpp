
#include <iostream>
using namespace std;
//  function to print the sorted array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//
void selectionsort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int minidx = i;
        //  the TC = O(n*log(n))
        //  loop for find the minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    selectionsort(arr, 5);

    return 0;
}
