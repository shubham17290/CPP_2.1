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
    sort(arr, arr + n); // in-built function to sort the array
    //  and yes by using this function you sort value for the specific range
    print(arr, n);

    return 0;
}
