#include <iostream>
using namespace std;

int main() {
    //  method : 02 to declare the array -> defining array with it's proper values and size
    int marks[50] = {1, 2, 3, 4};
    int sz = sizeof(marks) / sizeof(marks[0]);
    cout << "Size of the array : " << sizeof(marks) / sizeof(marks[0]) << endl;
    for (int i = 0; i <= 3; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}
