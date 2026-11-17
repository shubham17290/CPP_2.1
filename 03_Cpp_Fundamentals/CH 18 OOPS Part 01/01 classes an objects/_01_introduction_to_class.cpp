#include <iostream>
using namespace std;
class student {
    //  propertiese
    string name;
    float cgpa;
    //  methods
    void getpercentage() { cout << (cgpa * 10) << " % \n" << endl; }
};

int main() {
    student s1; // student -> type , s1 -> object
    cout << sizeof(s1) << endl;

    student s2; // student -> type , s1 -> object
    cout << sizeof(s2) << endl;

    return 0;
}
