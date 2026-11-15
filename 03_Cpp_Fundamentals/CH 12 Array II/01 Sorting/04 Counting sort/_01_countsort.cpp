#include <bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n) {
    if (n <= 1)
        return;

    // Step 1: min aur max nikaalo (negative numbers handle karne ke liye)
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;

    // Step 2: freq array banao (0 se initialize)
    vector<int> freq(range, 0);

    // Step 3: freq count karo (offset = minVal)
    for (int i = 0; i < n; i++) {
        freq[arr[i] - minVal]++;
    }

    // Step 4: freq ka prefix sum (cumulative) — positions determine karne ke liye
    for (int i = 1; i < range; i++) {
        freq[i] += freq[i - 1];
    }

    // Step 5: output array banao (stable sort ke liye right-to-left fill karo)
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[freq[arr[i] - minVal] - 1] = arr[i];
        freq[arr[i] - minVal]--;
    }

    // Step 6: output ko original array mein copy karo
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, -3, 8, 1, -3, 0, 7, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    countsort(arr, n);

    cout << "Sorted array:   ";
    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}
