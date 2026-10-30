#include <iostream>
using namespace std;
//  here is the kadan's algorithms concept
void maxsubarraysum(int *arr, int n) {
    int maxSum = INT16_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << " the maximum sub array sum : " << maxSum << endl;
}
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxsubarraysum(arr, n);

    return 0;
}
