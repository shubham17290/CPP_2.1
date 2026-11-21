#include <iostream>
using namespace std;

class Example {
  public:
    static int x; // declaration only
};

int Example::x = 0; // definition — allocates storage, initializes to 0

int main() {
    Example eq1;
    Example eq2;
    Example eq3;

    cout << eq1.x++ << endl; // 0  (x becomes 1)
    cout << eq2.x++ << endl; // 1  (x becomes 2)
    cout << eq3.x++ << endl; // 2  (x becomes 3)

    return 0;
}
