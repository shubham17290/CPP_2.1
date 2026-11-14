#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate for the fixed first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Since sorted, if smallest is > 0, no triplet can sum to 0
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    left++; // need bigger sum
                } else if (sum > 0) {
                    right--; // need smaller sum
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate values for left and right
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
            }
        }

        return result;
    }
};
