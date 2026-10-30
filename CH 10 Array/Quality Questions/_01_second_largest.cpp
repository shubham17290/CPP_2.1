#include <iostream>
#include <climits>
using namespace std;

// Quality question: find second largest element in an array.
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6;
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "Second largest = " << second << endl;
    return 0;
}
