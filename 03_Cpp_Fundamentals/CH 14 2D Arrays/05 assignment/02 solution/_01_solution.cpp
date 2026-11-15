/*Question 1 : Print the number of all 7’s that are in the 2d array.
Example :
Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
Output - 2*/
#include <iostream>
using namespace std;

int countSevens(int arr[][3], int n, int m) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 7) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    cout << countSevens(arr, 2, 3) << endl; // prints the result
    return 0;
}
