#include <iostream>
#include <algorithm>
using namespace std;

// Question 3 : Maximum Product Subarray (MEDIUM)
// Find a (contiguous) subarray with the largest product and return it.
// Most basic array approach: single pass tracking current max and min product,
// because a negative number can flip min into max.
int maxProduct(int nums[], int n) {
    if (n == 0) return 0;

    int result = nums[0];
    int curMax = nums[0];
    int curMin = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            swap(curMax, curMin);
        }
        curMax = max(nums[i], curMax * nums[i]);
        curMin = min(nums[i], curMin * nums[i]);

        result = max(result, curMax);
    }
    return result;
}

int main() {
    int a1[] = {2, 3, -2, 4};
    cout << "Test 1: " << maxProduct(a1, 4) << endl; // 6

    int a2[] = {-2, 0, -1};
    cout << "Test 2: " << maxProduct(a2, 3) << endl; // 0

    return 0;
}
