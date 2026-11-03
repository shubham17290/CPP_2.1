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

    cout << "top element before pop : " << pq.top() << endl; // 30

    //  pop removes the top element (the largest element)
    pq.pop(); // removes 30  ->  20,15,10,5
    cout << "top element after first pop  : " << pq.top() << endl; // 20

    pq.pop(); // removes 20  ->  15,10,5
    cout << "top element after second pop : " << pq.top() << endl; // 15

    pq.pop(); // removes 15  ->  10,5
    cout << "top element after third pop  : " << pq.top() << endl; // 10

    cout << "size of the priority queue after pops : " << pq.size() << endl; // 2

    return 0;
}
