#include <iostream>
using namespace std;

class Student {
  public:
    string name;
    int *marks; // pointer → needs special care

    // normal constructor
    Student(string n, int m) {
        name = n;
        marks = new int(m); // allocate memory on heap
    }

    // DEEP copy constructor
    Student(const Student &s) {
        name = s.name;
        marks = new int(*s.marks); // 🔑 allocate NEW memory + copy the VALUE
        cout << "Deep copy constructor called\n";
    }

    void show() { cout << name << " → marks = " << *marks << "  (address: " << marks << ")\n"; }
};

int main() {
    Student s1("Alice", 90);
    s1.show();

    Student s2(s1); // deep copy
    s2.show();

    // change s2's marks → s1 should NOT change
    *s2.marks = 50;

    cout << "\nAfter changing s2's marks:\n";
    s1.show(); // still 90 ✅
    s2.show(); // 50

    return 0;
}
