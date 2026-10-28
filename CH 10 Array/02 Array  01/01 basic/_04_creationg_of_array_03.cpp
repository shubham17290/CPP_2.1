#include <iostream>
using namespace std;

int main() {
    //  method : 03 of defining the array with its value and no mention of the size and it will
    //  mention there automatically !
    int marks[] = {1, 2, 3, 4, 5, 6};

    int sz = sizeof(marks) / sizeof(marks[0]);
    cout << "Size of the array : " << sizeof(marks) / sizeof(marks[0]) << endl;
    for (int i = 0; i < sz; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
