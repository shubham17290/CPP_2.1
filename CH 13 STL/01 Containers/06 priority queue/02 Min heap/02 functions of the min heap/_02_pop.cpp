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

    cout << "top element before pop : " << pq.top() << endl; // 5

    //  pop removes the top element (the smallest element)
    pq.pop(); // removes 5  ->  10,15,20,30
    cout << "top element after first pop  : " << pq.top() << endl; // 10

    pq.pop(); // removes 10  ->  15,20,30
    cout << "top element after second pop : " << pq.top() << endl; // 15

    pq.pop(); // removes 15  ->  20,30
    cout << "top element after third pop  : " << pq.top() << endl; // 20

    cout << "size of the priority queue after pops : " << pq.size() << endl; // 2

    return 0;
}
