#include <iostream>
using namespace std;

// Abstract class: defines WHAT to do, not HOW.
class Shape {
  public:
    virtual void draw() = 0; // pure virtual -> no body, forces children to implement
};

class Circle : public Shape {
  public:
    void draw() override { cout << "Drawing a Circle\n"; }
};

class Square : public Shape {
  public:
    void draw() override { cout << "Drawing a Square\n"; }
};

int main() {
    Shape *s1 = new Circle();
    Shape *s2 = new Square();

    s1->draw(); // "Drawing a Circle"
    s2->draw(); // "Drawing a Square"

    delete s1;
    delete s2;
    return 0;
}
