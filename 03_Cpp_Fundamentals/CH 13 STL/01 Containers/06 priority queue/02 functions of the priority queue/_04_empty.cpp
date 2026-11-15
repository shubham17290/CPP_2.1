#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of an empty priority queue
    priority_queue<int> pq;

    //  empty checks whether the priority queue is empty
    if (pq.empty()) {
        cout << "the priority queue is empty" << endl;
    } else {
        cout << "the priority queue is not empty" << endl;
    }

    pq.push(10); // 10
    pq.push(20); // 20,10
    pq.push(30); // 30,20,10

    cout << "size after pushes : " << pq.size() << endl; // 3

    if (pq.empty()) {
        cout << "the priority queue is empty" << endl;
    } else {
        cout << "the priority queue is not empty" << endl;
    }

    //  popping all elements to make the priority queue empty again
    while (!pq.empty()) {
        pq.pop();
    }

    cout << "size after popping all elements : " << pq.size() << endl; // 0

    if (pq.empty()) {
        cout << "the priority queue is empty again" << endl;
    }

    return 0;
}
