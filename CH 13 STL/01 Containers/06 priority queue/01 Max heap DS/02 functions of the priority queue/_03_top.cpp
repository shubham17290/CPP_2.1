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

    //  top returns a reference to the top element (the largest element)
    //  top does NOT remove the element from the priority queue
    cout << "top element : " << pq.top() << endl; // 30

    cout << "size of the priority queue : " << pq.size() << endl; // 5 (unchanged)

    return 0;
}
