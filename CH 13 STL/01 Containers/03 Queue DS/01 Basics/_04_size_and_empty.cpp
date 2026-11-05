#include <iostream>
#include <queue>
using namespace std;

int main() {
    //  creating a queue
    queue<int> q;

    //  check empty on a fresh queue
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40

    cout << "size of the queue : " << q.size() << endl; // 4

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty " << endl;
    }

    //  popping all elements
    while (!q.empty()) {
        q.pop();
    }

    cout << "size after popping all : " << q.size() << endl; // 0

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    }

    return 0;
}