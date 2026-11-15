#include <iostream>
using namespace std;

// The size is fixed when the program is compiled.
// Declared outside functions, this array exists until the program ends.
int numbers[5] = {10, 20, 30, 40, 50};

int main() {
    cout << "Static memory allocation example\n";
    cout << "Array capacity: " << sizeof(numbers) / sizeof(numbers[0]) << '\n';
    cout << "Memory used: " << sizeof(numbers) << " bytes\n";
    cout << "Address of first element: " << static_cast<void *>(numbers) << "\n\n";

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';

    // The array always has 5 elements; its size cannot be changed at runtime.
    return 0;
}
