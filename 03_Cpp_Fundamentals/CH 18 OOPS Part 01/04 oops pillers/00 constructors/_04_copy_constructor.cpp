#include <iostream>
using namespace std;

class Student {
  public:
    string name;
    int age;

    // normal constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // COPY constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called\n";
    }

    void show() { cout << name << ", " << age << endl; }
};

int main() {
    Student s1("Alice", 20); // normal constructor
    s1.show();

    Student s2(s1); // 🔁 copy constructor runs here
    s2.show();

    Student s3 = s1; // 🔁 also copy constructor (NOT assignment)
    s3.show();

    return 0;
}
