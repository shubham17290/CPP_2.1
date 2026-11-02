#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout << "Size of stack s1 is: " << s1.size() << endl;
    cout << " top element of stack s1 is: " << s1.top() << endl;
    stack<int> s2;
    s2.push(100);
    s2.push(200);
    cout << "Size of stack s2 is: " << s2.size() << endl;
    cout << " top element of stack s2 is: " << s2.top() << endl;
    s1.swap(s2);
    cout << "Size of stack s1 after swapping is: " << s1.size() << endl;
    cout << " top element of stack s1 after swapping is: " << s1.top() << endl;
    cout << "Size of stack s2 after swapping is: " << s2.size() << endl;

    return 0;
}
