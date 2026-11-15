

#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  creating 2d vector
    /*vector<vector<int>> arr(5, vector<int>(4, 0));

    int totalRows = arr.size();
    int totalCols = arr[0].size();*/

    //  creating 2d : zacged array
    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);
    int totalrowcount = brr[2].size();
    //  int totalcolcount = brr[i].size();
    cout << totalrowcount << endl;

    return 0;
}
