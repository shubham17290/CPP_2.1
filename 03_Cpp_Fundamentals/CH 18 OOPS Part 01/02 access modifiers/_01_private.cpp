#include <iostream>
using namespace std;

class Student {
  private:
    string name = "Alice";
    int age = 20;

  public:
    // member function accessing ANOTHER object of same class
    void show(Student s) {
        cout << "Name: " << s.name << endl; // private access OK
        cout << "Age : " << s.age << endl;
    }
};

int main() {
    Student s1;  // object
    s1.show(s1); // object accessing its own private data via method
    return 0;
}
