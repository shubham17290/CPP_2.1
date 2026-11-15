#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    //  creation of an empty min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    //  empty checks whether the priority queue is empty
    if (pq.empty()) {
        cout << "the priority queue is empty" << endl;
    } else {
        cout << "the priority queue is not empty" << endl;
    }

    pq.push(10); // 10
    pq.push(20); // 10,20
    pq.push(30); // 10,20,30

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
