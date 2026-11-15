#include <iostream>
using namespace std;

// Here matrix is 2x3 and result is 3x2
void transpose(int matrix[][3], int result[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[3][2];

    transpose(matrix, result, 2, 3);
    printMatrix(result, 3, 2); // prints the transposed matrix

    return 0;
}
