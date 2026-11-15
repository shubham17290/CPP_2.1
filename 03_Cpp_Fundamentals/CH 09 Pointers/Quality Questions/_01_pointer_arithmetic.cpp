#include <iostream>
using namespace std;

// Quality question: pointer arithmetic on an array.
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    cout << "First: " << *p << endl;
    p++;
    cout << "Second: " << *p << endl;
    p += 2;
    cout << "Fourth: " << *p << endl;
    cout << "Last via pointer: " << *(arr + 4) << endl;
    return 0;
}
