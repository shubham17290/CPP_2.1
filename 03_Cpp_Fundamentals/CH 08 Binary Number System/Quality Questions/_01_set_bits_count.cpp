#include <iostream>
using namespace std;

// Quality question: count set bits (Brian Kernighan's algorithm).
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Set bits = " << countSetBits(n) << endl;
    return 0;
}
