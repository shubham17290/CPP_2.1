#include <iostream>
using namespace std;

void spiralMatrix(int mat[4][4], int n, int m) {
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol) {

        // top
        for (int j = scol; j <= ecol; j++) {
            cout << mat[srow][j] << "  ";
        }

        // right
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << "  ";
        }

        // bottom -> condition is required to save the duplicacy
        if (srow < erow) { // Guard to prevent duplicates in a single row
            for (int j = ecol - 1; j >= scol; j--) {
                cout << mat[erow][j] << "  ";
            }
        }

        // left -> condition is required to save the duplicacy
        if (scol < ecol) { // Guard to prevent duplicates in a single column
            // FIXED: Changed condition from 'i < srow + 1' to 'i > srow'
            for (int i = erow - 1; i > srow; i--) {
                cout << mat[i][scol] << "  ";
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main() {
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralMatrix(mat, 4, 4);

    return 0;
}
