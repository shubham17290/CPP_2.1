
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int totalsum = accumulate(arr.begin(), arr.end(), 0);
    cout << totalsum << endl;

    return 0;
}
