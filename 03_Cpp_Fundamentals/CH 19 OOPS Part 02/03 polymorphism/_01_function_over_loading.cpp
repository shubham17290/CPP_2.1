#include <iostream>
using namespace std;
class print {
  public:
    void show(int x) { cout << "int : " << x << endl; }

    void show(string x) { cout << "string : " << x << endl; }
};

int main() {
    print obj1;
    obj1.show(25);
    obj1.show("apna college");

    return 0;
}
