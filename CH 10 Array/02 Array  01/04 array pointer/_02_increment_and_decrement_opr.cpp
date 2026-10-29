#include <iostream>
using namespace std;
//  increment and decrement operator
int main() {
    int a = 10;
    int *aptr = &a;

    cout << aptr << endl;
    aptr++; // adding one integer space
    cout << aptr << endl;

    return 0;
}
