#include <iostream>
#include <stack>
using namespace std;

int main() {
    //  creation of a stack
    stack<int> s;
    //  pushing elements into stack-> insertion of elements into stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "Size of stack is: " << s.size() << endl;
    cout << " top element of stack is: " << s.top() << endl;

    //  poping elements from stack-> deletion of elements from stack
    s.pop();
    s.pop();

    cout << "Size of stack after poping elements is: " << s.size() << endl;
    cout << " top element of stack is: " << s.top() << endl;

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
