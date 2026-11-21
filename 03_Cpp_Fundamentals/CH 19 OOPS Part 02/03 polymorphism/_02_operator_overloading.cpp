#include <iostream>
#include <string>
using namespace std;

class Complex {
    int real;
    int img;

  public:
    Complex(int r, int i) : real(r), img(i) {}

    void shownum() const { cout << real << " + " << img << "i\n"; }

    // Return a new Complex object; do not mutate operands.
    Complex operator+(const Complex &c2) const { return Complex(real + c2.real, img + c2.img); }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);

    c1.shownum();
    c2.shownum();

    Complex c3 = c1 + c2;
    cout << "res = ";
    c3.shownum();

    return 0;
}
