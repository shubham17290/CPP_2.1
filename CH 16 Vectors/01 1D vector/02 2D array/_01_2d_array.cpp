#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// A 2D array is stored row by row, so its name behaves like a pointer
// to its first row: int (*)[COLS]. This is the same as int mat[][COLS].
void printMatrix(int (*mat)[COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            // mat[i][j] is the same as *(*(mat + i) + j)
            cout << *( *(mat + i) + j) << ' ';
        }
        cout << '\n';
    }
}

// The same memory can be walked as one flat block of ints.
void doubleMatrix(int *mat, int size) {
    for (int i = 0; i < size; i++) {
        *(mat + i) *= 2;
    }
}

int sumMatrix(const int *mat, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(mat + i);
    }
    return sum;
}

int main() {
    int mat[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original matrix:\n";
    printMatrix(mat, ROWS);

    cout << "\nAddress of each row (rows are " << COLS * sizeof(int) << " bytes apart):\n";
    for (int i = 0; i < ROWS; i++) {
        cout << "row " << i << ": " << static_cast<void *>(mat + i) << '\n';
    }

    cout << "\nSum of all elements = " << sumMatrix(&mat[0][0], ROWS * COLS) << '\n';

    // &mat[0][0] is the address of the first int in the whole matrix.
    doubleMatrix(&mat[0][0], ROWS * COLS);

    cout << "\nAfter doubling every element through a pointer:\n";
    printMatrix(mat, ROWS);

    return 0;
}
