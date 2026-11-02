#include <iostream>
#include <queue>
using namespace std;

int main() {
    //  creating a queue
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 10,20,30,40

    //  queue has no iterators, so traverse by popping elements
    cout << "Traversing the queue : ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "size after traversal : " << q.size() << endl; // 0

    return 0;
}