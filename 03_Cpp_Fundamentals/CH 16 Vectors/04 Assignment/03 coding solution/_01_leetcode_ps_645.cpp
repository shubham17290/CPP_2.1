#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> findErrorNums(vector<int> &nums) {
        int n = nums.size();
        int duplicate = -1;

        // First pass: find the duplicate and mark visited numbers
        for (int i = 0; i < n; ++i) {
            int idx = abs(nums[i]) - 1; // Map value to index
            if (nums[idx] > 0) {
                // First time seeing this number, mark it as visited
                nums[idx] *= -1;
            } else {
                // Already seen, this is the duplicate (only set once)
                if (duplicate == -1) {
                    duplicate = abs(nums[i]);
                }
            }
        }

        // Second pass: find the missing number
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                // The positive value indicates the missing number is i + 1
                result.push_back(duplicate);
                result.push_back(i + 1);
                break;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = sol.findErrorNums(nums);

    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}
