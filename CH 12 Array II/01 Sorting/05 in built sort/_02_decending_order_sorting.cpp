#include <algorithm>
#include <iostream>
using namespace std;
//  sorting logic of the array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    int arr[] = {8, 4, 1, 2, 5, 8, 9, 2, 3}; // size of this array is :-> 9
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n, greater<int>()); // in-built f, hai and ascending order mein sort krta hai

    print(arr, n);

    return 0;
}
