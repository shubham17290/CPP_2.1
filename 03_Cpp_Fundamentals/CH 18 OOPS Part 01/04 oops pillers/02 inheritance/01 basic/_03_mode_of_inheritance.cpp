#include <iostream>
#include <string>

using namespace std;
class Animal {

  public:
    string color;
    void eat() { cout << "eats\n"; }
    void breathe() { cout << "breathes\n"; }
};
class fish : protected Animal {
  public:
    int fins;

    void swim() {
        eat();
        cout << "fish swims \n";
    }
};

int main() {
    fish f1;
    f1.fins = 3;
    f1.swim();
    // f1.eat();
    // f1.breathe();

    cout << f1.fins << endl;
    return 0;
}
