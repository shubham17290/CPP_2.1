#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(100);
    delete ptr;

    cout << *ptr;

    return 0;
}
