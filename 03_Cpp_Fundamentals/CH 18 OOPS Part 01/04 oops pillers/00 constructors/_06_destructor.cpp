#include <iostream>
using namespace std;

class Car {
  public:
    // Constructor
    Car() { cout << "Car created\n"; }

    // Destructor (note the ~ symbol)
    ~Car() { cout << "Car destroyed\n"; }
};

int main() {
    Car myCar; // constructor runs

    cout << "Driving the car...\n";

    return 0;
} // destructor runs automatically here
