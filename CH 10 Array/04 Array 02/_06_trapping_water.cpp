#include <algorithm>
#include <iostream>

using namespace std;

int wtrap(const int *height, int n) {
    if (n <= 2)
        return 0;

    int leftmax[20000];
    int rightmax[20000];

    // Compute left maximum boundary
    leftmax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i - 1], height[i]);
    }

    // Compute right maximum boundary
    rightmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], height[i]);
    }

    // Calculate total trapped water
    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        totalWater += min(leftmax[i], rightmax[i]) - height[i];
    }

    return totalWater;
}

int main() {
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(height[0]);

    int trapped = wtrap(height, n);
    cout << "Total trapped water: " << trapped << "\n";

    return 0;
}
