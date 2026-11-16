/*Question 3 : You are given a 0-indexed integer array nums.
The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) &
nums[k]).
The xor-beauty of the array is the XORing of the effective values of all the possible
triplets of indices (i, j, k) where 0 <= i, j, k < n.
Return the xor-beauty of nums.
*/
#include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int> &nums) {
    int a = 0, b = 0;
    for (int i = 0; i < nums.size(); i++) {
        a = a | nums[i];
        b = b ^ nums[i];
    }
    return (a & b);
}

int main() { return 0; }
