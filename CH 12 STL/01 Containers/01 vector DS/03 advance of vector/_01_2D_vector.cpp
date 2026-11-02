

#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creating 2d vector
    vector<vector<int>> arr(5, vector<int>(4, 0));
    //  2d vector is a vector of vectors
    //  with 5 rows and 4 columns and eaach element is initialized to 0

    int totalRows = arr.size();
    int totalCols = arr[0].size();

    return 0;
}
