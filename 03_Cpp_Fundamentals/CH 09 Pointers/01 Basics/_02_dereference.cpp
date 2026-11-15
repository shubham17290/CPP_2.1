#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << &a << endl;
    cout << *(&a) << endl;

    *ptr = 20;
    cout << a << endl;
    //  creating a NULL pointer :
    int *ptr1 = NULL;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    return 0;
}
