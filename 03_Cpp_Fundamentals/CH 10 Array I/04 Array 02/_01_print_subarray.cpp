#include <iostream>
using namespace std;
//  print the subarray
void printSubarrays(int *arr, int n) {
//  total time complexity is -> o(n^3) !
    for (int start = 0; start < n; start++) { // n times
        for (int end = start; end < n; end++) { // n times
            // starting and ending index in going to print so far !
            // cout << "(" << start << " , " << end << " ) ";
            for (int i = start; i <= end; i++) { // n times
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printSubarrays(arr, n);
    return 0;
}
