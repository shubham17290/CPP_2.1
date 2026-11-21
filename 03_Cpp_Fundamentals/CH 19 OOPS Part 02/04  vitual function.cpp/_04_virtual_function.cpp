#include <iostream>
using namespace std;

class parent {
  public:
    virtual void show() const { // virtual -> runtime dispatch
        cout << "parent class show ...\n";
    }
    virtual ~parent() = default; // virtual dtor: safe polymorphic delete
};

class child : public parent {
  public:
    void show() const override { // 'override' catches signature typos
        cout << "child class show ...\n";
    }
};

int main() {
    child child1;

    // 1) Direct object call — static binding, obvious answer.
    child1.show(); // "child class show ..."

    // 2) Through a base-class pointer — dynamic binding kicks in.
    parent *p = &child1;
    p->show(); // "child class show ..."  (virtual at work)

    // 3) Through a base-class reference — same thing.
    parent &r = child1;
    r.show(); // "child class show ..."

    // 4) Through a base object (sliced) — always parent's version.
    parent base;
    base.show(); // "parent class show ..."
    return 0;
}
