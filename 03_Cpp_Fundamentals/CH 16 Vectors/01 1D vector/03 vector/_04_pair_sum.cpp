//  pair sum leetcode problem number 167
#include <iostream>
#include <vector>
using namespace std;

// LeetCode 167 returns the 1-indexed positions of the two numbers.
vector<int> pairSum(const vector<int> &arr, int target) {
    int st = 0;
    int end = static_cast<int>(arr.size()) - 1;

    while (st < end) {
        int currSum = arr[st] + arr[end];
        if (currSum == target) {
            return {st + 1, end + 1};  // stop as soon as the pair is found
        } else if (currSum > target) {
            end--;
        } else {
            st++;
        }
    }

    return {};  // no pair found
}

int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    if (ans.empty()) {
        cout << "No pair found" << endl;
    } else {
        cout << ans[0] << " , " << ans[1] << endl;
    }

    return 0;
}
