#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float pi = 3.14;
    float *ptr2 = &pi;
    cout << &pi << "  =  " << ptr2 << endl;
    cout << sizeof(ptr) << endl;

    cout << &a << "  =  " << ptr << endl;
    cout << sizeof(ptr2) << endl;

    return 0;
}
