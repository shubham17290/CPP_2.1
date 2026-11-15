#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creation of first priority queue
    priority_queue<int> pq1;
    pq1.push(10); // 10
    pq1.push(20); // 20,10
    pq1.push(30); // 30,20,10

    cout << "top of pq1 before swap : " << pq1.top() << endl; // 30
    cout << "size of pq1 before swap: " << pq1.size() << endl;  // 3

    //  creation of second priority queue
    priority_queue<int> pq2;
    pq2.push(100); // 100
    pq2.push(200); // 200,100
    pq2.push(300); // 300,200,100

    cout << "top of pq2 before swap : " << pq2.top() << endl; // 300
    cout << "size of pq2 before swap: " << pq2.size() << endl;  // 3

    //  swap exchanges the contents of the two priority queues
    pq1.swap(pq2);

    cout << "top of pq1 after swap  : " << pq1.top() << endl; // 300
    cout << "size of pq1 after swap : " << pq1.size() << endl;  // 3

    cout << "top of pq2 after swap  : " << pq2.top() << endl; // 30
    cout << "size of pq2 after swap : " << pq2.size() << endl;  // 3

    return 0;
}
