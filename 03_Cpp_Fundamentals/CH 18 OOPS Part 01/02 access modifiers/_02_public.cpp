#include <iostream>
using namespace std;

class Student {
  public:
    string name = "Alice";
    int age = 20;

    // member function accessing ANOTHER object of same class
    void show(Student s) {
        cout << "Name: " << s.name << endl; // public access OK
        cout << "Age : " << s.age << endl;
    }
};

int main() {
    Student s1;  // object
    s1.show(s1); // object accessing its own public data via method
    return 0;
}
