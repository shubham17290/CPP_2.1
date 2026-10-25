#include <iostream>
using namespace std;

void change(int x) { x = 100; } // no return

int main() {
    int a = 10;
    change(a);
    cout << a;
    return 0;
}
