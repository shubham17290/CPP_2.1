#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int maxArea(vector<int> &height) {
        int left = 0;
        int right = height.size() - 1;
        int best = 0;

        while (left < right) {
            // Area with the current pair of walls
            int h = min(height[left], height[right]);
            int w = right - left;
            best = max(best, h * w);

            // Move the shorter wall inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return best;
    }
};
