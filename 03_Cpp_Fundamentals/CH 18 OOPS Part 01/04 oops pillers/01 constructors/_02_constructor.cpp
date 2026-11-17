#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    int speed;

    // 1️⃣ DEFAULT constructor
    Car() {
        brand = "Unknown";
        speed = 0;
        cout << "1. Default constructor\n";
    }

    // 2️⃣ PARAMETERIZED constructor
    Car(string b, int s) {
        brand = b;
        speed = s;
        cout << "2. Parameterized constructor\n";
    }

    // 3️⃣ COPY constructor
    Car(const Car &c) {
        brand = c.brand;
        speed = c.speed;
        cout << "3. Copy constructor\n";
    }

    // 4️⃣ MOVE constructor
    Car(Car &&c) noexcept {
        brand = c.brand;
        speed = c.speed;
        c.brand = "(moved)";
        c.speed = 0;
        cout << "4. Move constructor\n";
    }

    void show() { cout << "   Car: " << brand << ", Speed: " << speed << " km/h\n"; }
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

    return 0;
}
