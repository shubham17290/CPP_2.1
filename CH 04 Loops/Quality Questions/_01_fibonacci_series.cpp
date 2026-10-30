#include <iostream>
using namespace std;

// Quality question: print first n Fibonacci numbers.
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
