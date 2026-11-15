#include <cstdio>

// Question 1: Count all 7's in the 2D array
int countSevens(int arr[][3], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 7) {
                count++;
            }
        }
    }

    return count;
}

// Question 2: Sum of the second row
// Second row means row index 1 in C++
int sumSecondRow(int nums[][3], int cols) {
    int sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += nums[1][j];
    }

    return sum;
}

// Question 3: Transpose of a matrix
// Here matrix is 2x3 and result is 3x2
void transpose(int matrix[][3], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Helper function to print a 3x2 matrix
void printMatrix(int matrix[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Question 1
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};

    printf("Q1 Output: %d\n", countSevens(arr, 2, 3));

    // Question 2
    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};

    printf("Q2 Output: %d\n", sumSecondRow(nums, 3));

    // Question 3
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int result[3][2];

    transpose(matrix, result, 2, 3);

    printf("Q3 Output: Transpose =\n");
    printMatrix(result, 3, 2);

    return 0;
}
