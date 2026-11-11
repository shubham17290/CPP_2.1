#include <iostream>
using namespace std;
void func(int mat[][4], int n, int m) {
    // cout << "1st row ptr:  " << mat << endl;
    // cout << "2st row ptr:  " << mat + 1 << endl;
    // cout << "3st row ptr:  " << mat + 2 << endl;
    // cout << "1st row value:  " << *(mat) << endl;
    // cout << "2st row value:  " << *(mat + 1) << endl;
    // cout << "3st row value:  " << *(mat + 2) << endl;
    cout << *(*(mat + 2) + 2) << endl;
}

// void func(int (*mat)[][4], int n, int m) {}
int main() {
    int mat[4][4] = {

        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}

    };
    func(mat, 4, 4);

    return 0;
}
