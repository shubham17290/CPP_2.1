#include <iostream>
#include <queue>
using namespace std;

int main() {
    //  creating a queue
    queue<int> q;

    //  insertion at the rear (enqueue)
    q.push(10);
    // 10
    q.push(20);
    // 10,20
    q.push(30);
    // 10,20,30
    q.push(40);
    // 10,20,30,40

    cout << "front before pop : " << q.front() << endl; // 10

    //  deletion from the front (dequeue)
    q.pop(); // removes 10
    // 20,30,40
    cout << "front after pop : " << q.front() << endl; // 20

    q.pop(); // removes 20
    // 30,40
    cout << "front after second pop : " << q.front() << endl; // 30

    cout << "size : " << q.size() << endl; // 2

    return 0;
}