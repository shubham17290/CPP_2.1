#include <iostream>
#include <string>

using namespace std;
class parent {
  public:
    void show() { cout << "parent class show ....\n"; }
};
class child : public parent {
  public:
    void show() { cout << " child class show...\n"; }
};
int main() {
    child child1;
    child1.show();
    return 0;
}
