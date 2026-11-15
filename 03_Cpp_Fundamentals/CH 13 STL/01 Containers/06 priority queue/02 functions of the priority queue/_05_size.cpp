#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of a priority queue
    priority_queue<int> pq;

    cout << "initial size of the priority queue : " << pq.size() << endl; // 0

    pq.push(10); // 10
    pq.push(20); // 20,10
    pq.push(30); // 30,20,10
    pq.push(5);  // 30,20,10,5
    pq.push(15); // 30,20,15,10,5

    cout << "size after 5 pushes : " << pq.size() << endl; // 5

    pq.pop(); // removes 30  ->  20,15,10,5
    pq.pop(); // removes 20  ->  15,10,5

    cout << "size after 2 pops   : " << pq.size() << endl; // 3

    return 0;
}
