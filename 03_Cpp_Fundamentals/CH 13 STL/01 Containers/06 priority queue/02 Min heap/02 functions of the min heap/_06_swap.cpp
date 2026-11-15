#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    //  creation of first min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10); // 10
    pq1.push(20); // 10,20
    pq1.push(30); // 10,20,30

    cout << "top of pq1 before swap : " << pq1.top() << endl; // 10
    cout << "size of pq1 before swap: " << pq1.size() << endl;  // 3

    //  creation of second min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(100); // 100
    pq2.push(200); // 100,200
    pq2.push(300); // 100,200,300

    cout << "top of pq2 before swap : " << pq2.top() << endl; // 100
    cout << "size of pq2 before swap: " << pq2.size() << endl;  // 3

    //  swap exchanges the contents of the two priority queues
    pq1.swap(pq2);

    cout << "top of pq1 after swap  : " << pq1.top() << endl; // 100
    cout << "size of pq1 after swap : " << pq1.size() << endl;  // 3

    cout << "top of pq2 after swap  : " << pq2.top() << endl; // 10
    cout << "size of pq2 after swap : " << pq2.size() << endl;  // 3

    return 0;
}
