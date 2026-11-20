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
//  level 02 inheritance you are going to see :
class Mamal : public Animal {

  public:
    string bloodType;
    Mamal() { bloodType = "worm"; }
};

//  yet to complete
class Dog : public Mamal {
  public:
    void tailwag() { cout << " a dog wags its tail\n"; }
};

int main() {
    Dog d1;
    d1.eat();
    d1.breathe();
    cout << d1.bloodType << endl;

    return 0;
}
