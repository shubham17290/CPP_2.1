#include <iostream>
using namespace std;

// Quality question: rotate array left by k positions.
void rotateLeft(int arr[], int n, int k) {
    k %= n;
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) arr[j] = arr[j + 1];
        arr[n - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    rotateLeft(arr, n, 2);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
