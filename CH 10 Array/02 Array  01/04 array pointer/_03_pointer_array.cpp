#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << "\n"; // 1st
    ptr++;
    cout << (ptr + 3) << "\n";
    cout << (ptr - 3) << "\n"; // 3rd
    ptr--;
    cout << ptr << "\n"; // 3rd

    return 0;
}
