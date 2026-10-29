#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; // address-> 0x..

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << *arr << endl;
    cout << *(arr + 1) << endl; // arr[1]
    cout << *(arr + 2) << endl; // arr[2]
    cout << *(arr + 3) << endl; // arr[3]
    cout << *(arr + 4) << endl; // arr[4]

    return 0;
}
