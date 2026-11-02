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

    //  accessing the front (first) element
    cout << "the front/first element of the queue is : " << q.front() << endl; // 10

    //  accessing the back (last) element
    cout << "the back/last element of the queue is : " << q.back() << endl; // 40

    return 0;
}