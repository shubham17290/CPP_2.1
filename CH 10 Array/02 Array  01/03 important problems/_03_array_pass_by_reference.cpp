#include <iostream>
using namespace std;
//  unfinished
void func(int arr[] ) {
    arr[0] = 1000;

}

void func2(int *ptr) {
     ptr[0] = 1000;
    }

//  unfinished
int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl; // address-> 0x..

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    func(arr);// passing array name is equivalent to passing pointer !
    cout << arr[0] << endl;

    return 0;
}
