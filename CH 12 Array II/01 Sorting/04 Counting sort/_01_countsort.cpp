#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//  function to print the sorted array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//  counting sort logic code
void countsort(int arr[], int n) {

    if (n == 0) return;

    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int* freq = new int[range](); // frequency of each value (zero-initialized)

    //  1st step : count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i] - minVal]++;
    }

    //  2nd step : cumulative frequencies (stable placement)
    for (int i = 1; i < range; i++) {
        freq[i] += freq[i - 1];
    }

    //  3rd step : build the sorted output (iterate from the end for stability)
    int* output = new int[n];
    for (int i = n - 1; i >= 0; i--) {
        output[freq[arr[i] - minVal] - 1] = arr[i];
        freq[arr[i] - minVal]--;
    }

    //  4th step : copy sorted output back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] freq;
    delete[] output;

    print(arr, n);
}

int main() {
    int arr[] = {5, 4, 1, 3, 2, 0, -2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countsort(arr, n);

    return 0;
}