#include <iostream>
using namespace std;

void update(int x, int &y) {
    x = 50;
    y = 60;
}

int main() {
    int a = 10, b = 20;
    update(a, b);
    cout << a << " " << b;
    return 0;
}
