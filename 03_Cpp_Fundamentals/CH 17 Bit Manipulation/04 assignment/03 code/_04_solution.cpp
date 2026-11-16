/* Given two integers dividend and divisor, divide two integers without using
multiplication, division, and mod operator. */
/*29. Divide Two Integers
Solved
Medium
Topics
premium lock iconCompanies

Given two integers dividend and divisor, divide two integers without using multiplication, division,
and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For
example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit
signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than
231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.



Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.

Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.



Constraints:

    -231 <= dividend, divisor <= 231 - 1
    divisor != 0

*/
#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    // Only overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Convert to positive 64-bit values
    long long a = abs((long long)dividend);
    long long b = abs((long long)divisor);
    long long quotient = 0;

    while (a >= b) {
        long long temp = b;     // divisor being doubled
        long long multiple = 1; // how many divisors temp represents

        // Double temp until it would exceed a
        while (a >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }

        a -= temp;            // subtract the big chunk
        quotient += multiple; // count how many divisors we removed
    }

    bool negative = (dividend < 0) ^ (divisor < 0);
    return negative ? (int)-quotient : (int)quotient;
}

int main() {
    int dividend, divisor;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor) << endl;
    return 0;
}
