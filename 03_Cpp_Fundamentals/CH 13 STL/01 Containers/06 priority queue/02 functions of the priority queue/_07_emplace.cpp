#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of a priority queue
    priority_queue<int> pq;

    //  emplace constructs the element in place at the back
    //  (behaves like push for primitive types)
    pq.emplace(10); // 10
    pq.emplace(20); // 20,10
    pq.emplace(30); // 30,20,10
    pq.emplace(5);  // 30,20,10,5
    pq.emplace(15); // 30,20,15,10,5

    cout << "top element after emplace : " << pq.top() << endl; // 30
    cout << "size of the priority queue: " << pq.size() << endl;  // 5

    return 0;
}
