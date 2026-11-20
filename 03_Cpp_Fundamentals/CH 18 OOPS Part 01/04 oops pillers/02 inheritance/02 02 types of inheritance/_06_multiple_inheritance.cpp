#include <iostream>
#include <string>

using namespace std;
class teacher {
  public:
    int salary;
    string subject;
};
class student {

  public:
    int rollno;
    int cgpa;
};
class ta : public teacher, public student {
  public:
    string name;
};

int main() {
    ta tal;
    tal.name = "shubham maurya";
    tal.salary = 20000;
    tal.subject = "dsa";
    tal.cgpa = 9.1;
    cout << tal.name << endl;
    cout << tal.subject << endl;
    cout << tal.cgpa << endl;
    return 0;
}
