#include <iostream>
#include <string>

using namespace std;
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

int main() { return 0; }
