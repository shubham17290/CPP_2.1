//  do the sum of the second row of the matrix
#include <iostream>
using namespace std;

int sumSecondRow(int nums[][3], int cols) {
    int sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += nums[1][j];
    }

    return sum;
}

int main() {
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    cout << sumSecondRow(nums, 3) << endl; // prints the result

    return 0;
}
