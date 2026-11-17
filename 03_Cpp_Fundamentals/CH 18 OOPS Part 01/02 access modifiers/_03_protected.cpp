#include <iostream>
using namespace std;

class Person {
  protected:
    string name = "Alice"; // protected
};

class Student : public Person {
  public:
    void show() {
        cout << "Name: " << name << endl; // ✅ OK - inherited protected
    }
};

int main() {
    Student s1;
    s1.show();

    // s1.name;  // ❌ ERROR - protected, not accessible from main

    return 0;
}
