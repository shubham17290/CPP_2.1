#include <iostream>
using namespace std;

// Fixed-size array: its size is known when the program is compiled.
// Because it is declared outside all functions, it has static storage duration:
// it exists from program start until the program ends.
int numbers[5] = {10, 20, 30, 40, 50};

int main() {
    cout << "Static memory allocation example\n";
    cout << "Array capacity: " << sizeof(numbers) / sizeof(numbers[0]) << '\n';
    cout << "Memory used: " << sizeof(numbers) << " bytes\n";
    cout << "Address of first element: " << static_cast<void*>(numbers) << "\n\n";

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';

    // The array always has 5 elements. Its size cannot be chosen at runtime
    // or changed while the program is running.
    return 0;
}
