#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    //  creation of a min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10); // 10
    pq.push(20); // 10,20
    pq.push(30); // 10,20,30
    pq.push(5);  // 5,10,20,30
    pq.push(15); // 5,10,15,20,30

    //  top returns a reference to the top element (the smallest element)
    //  top does NOT remove the element from the priority queue
    cout << "top element : " << pq.top() << endl; // 5

    cout << "size of the priority queue : " << pq.size() << endl; // 5 (unchanged)

    return 0;
}
