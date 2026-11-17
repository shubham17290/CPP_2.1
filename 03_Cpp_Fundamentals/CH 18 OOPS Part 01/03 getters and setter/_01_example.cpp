#include <iostream>
#include <string>

using namespace std;
class student {
  private:
    string name;
    float cgpa;

  public:
    void getPercentage() { cout << (cgpa * 10) << " % " << endl; }
    // setter
    void setname(string namevalue) { name = namevalue; }
    void setcgpa(float cgpavalue) { cgpa = cgpavalue; }
    // getters
    string getName() { return name; }
    float getCgpa() { return cgpa; }
};

int main() {

    student s1;

    s1.setname("shubham");
    s1.setcgpa(8.30);
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    return 0;
}
