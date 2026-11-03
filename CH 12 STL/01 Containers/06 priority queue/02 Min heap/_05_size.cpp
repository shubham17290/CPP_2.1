#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    //  creation of a min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;

    cout << "initial size of the priority queue : " << pq.size() << endl; // 0

    pq.push(10); // 10
    pq.push(20); // 10,20
    pq.push(30); // 10,20,30
    pq.push(5);  // 5,10,20,30
    pq.push(15); // 5,10,15,20,30

    cout << "size after 5 pushes : " << pq.size() << endl; // 5

    pq.pop(); // removes 5  ->  10,15,20,30
    pq.pop(); // removes 10  ->  15,20,30

    cout << "size after 2 pops   : " << pq.size() << endl; // 3

    return 0;
}
