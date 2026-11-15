#include <iostream>
using namespace std;

int num = 25; // global scope variable  , and it can be accessd at any place inside the file

void sum(int a, int b) {
    cout << num << endl;
    int s = a + b;
    cout << s << endl;
}
int main() {
    sum(5, 4);
    int s = 10;
    cout << num << endl;

    return 0;
}
