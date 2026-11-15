#include <iostream>
using namespace std;
void changeA(int &param) {
    param = 20;
    cout << param << endl;
}
int main() {
    int a = 10;
    changeA(a);
    cout << a << endl;

    return 0;
}
