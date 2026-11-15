#include <iostream>
using namespace std;
//   searching a key or the element in the sorted matrix and the heart of the logic

bool search(int mtx[][4], int n, int m, int key) {
    int i = 0, j = m - 1;
    while (i < n && j >= 0) {
        if (mtx[i][j] == key) {
            cout << "key found at cell (" << i << " , " << j << ")\n";
            return true;
        } else if (mtx[i][j] > key) {
            // left
            j--;
        } else {
            // down
            i++;
        }
    }
    cout << "key not found : " << endl;
    return false;
}
int main() {
    int mtx[4][4] = {

        {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    search(mtx, 4, 4, 33);

    return 0;
}
