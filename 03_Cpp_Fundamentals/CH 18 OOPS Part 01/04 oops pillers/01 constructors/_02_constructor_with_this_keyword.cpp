#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    int speed;

    // 1️⃣ DEFAULT constructor
    Car() {
        this->brand = "Unknown";
        this->speed = 0;
        cout << "1. Default constructor\n";
    }

    // 2️⃣ PARAMETERIZED constructor  →  parameter names SAME as members
    Car(string brand, int speed) {
        this->brand = brand; // this->brand = member, brand = parameter
        this->speed = speed;
        cout << "2. Parameterized constructor\n";
    }

    // 3️⃣ COPY constructor
    Car(const Car &c) {
        this->brand = c.brand;
        this->speed = c.speed;
        cout << "3. Copy constructor\n";
    }

    // 4️⃣ MOVE constructor
    Car(Car &&c) noexcept {
        this->brand = c.brand;
        this->speed = c.speed;
        c.brand = "(moved)";
        c.speed = 0;
        cout << "4. Move constructor\n";
    }

    // show() uses this-> too
    void show() { cout << "   Car: " << this->brand << ", Speed: " << this->speed << " km/h\n"; }

    // chaining example using `this`
    Car &setBrand(string brand) {
        this->brand = brand;
        return *this; // return the current object
    }
};

int main() {
    Car c1; // default
    c1.show();

    Car c2("BMW", 200); // parameterized
    c2.show();

    Car c3(c2); // copy
    c3.show();

    Car c4(move(c2)); // move
    c4.show();
    c2.show(); // c2 is now "(moved)"

    // chaining with `this`
    c4.setBrand("Audi").setBrand("Tesla");
    c4.show();

    return 0;
}
