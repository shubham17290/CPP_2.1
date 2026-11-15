#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    //  creation of a min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    //  emplace constructs the element in place at the back
    //  (behaves like push for primitive types)
    pq.emplace(10); // 10
    pq.emplace(20); // 10,20
    pq.emplace(30); // 10,20,30
    pq.emplace(5);  // 5,10,20,30
    pq.emplace(15); // 5,10,15,20,30

    cout << "top element after emplace : " << pq.top() << endl; // 5
    cout << "size of the priority queue: " << pq.size() << endl;  // 5

    return 0;
}
