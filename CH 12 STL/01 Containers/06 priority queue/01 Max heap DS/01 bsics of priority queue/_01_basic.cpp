#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of a priority queue
    priority_queue<int> pq;

    pq.push(10); // 10
    pq.push(20); // 20,10
    pq.push(30); // 30,20,10
    pq.push(5);  // 30,20,10,5
    pq.push(15); // 30,20,15,10,5

    //  top element of the priority queue
    cout << pq.top() << endl; // 30
    if (pq.empty()) {
        cout << "the priority queue is empty " << endl;
    } else {
        cout << "priority queue is not empty " << endl;
    }

    
    //  now lets do the pop operation in the priority queue
    pq.pop();         // 20,15,10,5
    pq.pop();         // 15,10,5
    cout << pq.top(); // 15
    pq.pop();         // 10,5
    cout << pq.top(); // 10

    return 0;
}
