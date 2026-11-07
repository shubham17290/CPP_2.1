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

    int freq[100000] = {0}; // range
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    //  1st step : count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    //  2nd step : place elements back in sorted order
    for (int i = minVal, j = 0; i <= maxVal; i++) {
        while (freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main() {
    int arr[6] = {5, 4, 1, 3, 2, 0};
    countsort(arr, 6);

    return 0;
}