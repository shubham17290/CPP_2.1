#include <iostream>
using namespace std;
void sayHello() { cout << "Hello :)" << endl; }

void assistent() {
    sayHello();
    cout << "Work done !";
}
int main() {
    /*sayHello();
    sayHello();
    sayHello();*/
    assistent();

    return 0;
}
