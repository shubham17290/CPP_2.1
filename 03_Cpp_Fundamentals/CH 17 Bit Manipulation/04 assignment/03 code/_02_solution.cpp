/*Question 2 : Given a non-empty array of integers nums, every element appears twice
except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only
constant extra space. [ Go to Qs ]
Hint - Think XOR*/
#include <iostream>
using namespace std;
int singleNumber(vector<int> &nums) {
    int answer = 0 for (int i = 0; i < nums.size(); i++) { answer ^= nums[i]; }
    return answer;
}
int main() { return 0; }
