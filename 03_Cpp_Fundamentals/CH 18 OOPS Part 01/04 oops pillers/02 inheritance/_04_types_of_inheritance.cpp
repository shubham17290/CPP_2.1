#include <iostream>
#include <string>

using namespace std;
//  simple animal class :
class Animal {

  public:
    string color;
    void eat() { cout << "eats\n"; }
    void breathe() { cout << "breathes\n"; }
};
class fish : public Animal {
  public:
    int fins;
    void swim() { cout << "fish swims \n"; }
};

int main() {
    fish f1;
    f1.fins = 3;
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0;
}
