//  max subarray sum
#include <iostream>
using namespace std;
void max_min_subarraysum(int *arr, int n) {
    int maxSum = INT16_MIN;
    int minSum = INT16_MAX;
    for (int start = 0; start < n; start++) {
        int currSum = 0;                        // n times
        for (int end = start; end < n; end++) { // n times
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
            minSum = min(minSum, currSum);
        }
        cout << endl;
    }
    cout << " maximum sub array sum is : " << maxSum << endl;
    cout << " minimum sub array sum is : " << minSum << endl;
}
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    max_min_subarraysum(arr, n);

    return 0;
}
