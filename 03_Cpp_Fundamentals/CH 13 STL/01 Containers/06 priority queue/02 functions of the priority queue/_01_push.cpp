#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of a priority queue (max heap by default)
    priority_queue<int> pq;

    //  push inserts an element into the priority queue
    //  the largest element always comes to the top
    pq.push(10); // 10
    pq.push(20); // 20,10
    pq.push(30); // 30,20,10
    pq.push(5);  // 30,20,10,5
    pq.push(15); // 30,20,15,10,5

    cout << "top element after all pushes : " << pq.top() << endl; // 30
    cout << "size of the priority queue   : " << pq.size() << endl;  // 5

    return 0;
}
