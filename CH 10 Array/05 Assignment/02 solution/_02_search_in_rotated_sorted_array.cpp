#include <iostream>
using namespace std;

// Question 2 : Search in Rotated Sorted Array (MEDIUM)
// nums is a sorted (distinct) array possibly rotated at an unknown pivot.
// Return index of target, or -1. Required: O(log n).
// Most basic array approach: binary search adapted for rotation.
int search(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;

        // Left half is sorted
        if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout << "target 0 -> index " << search(nums, n, 0) << endl; // 4
    cout << "target 3 -> index " << search(nums, n, 3) << endl; // -1

    return 0;
}
