#include <deque>
#include <iostream>
using namespace std;

int main() {

    //  creation of a deque
    deque<int> dq;
    //  insertion of the elements into the dqueue
    dq.push_back(10); // 10,
    dq.push_back(20); //10,20,
    dq.push_back(30); // 10,20,30,
    dq.push_back(40); // 10,20,30,40
    dq.push_back(50); // 10,20,30,40,50
    dq.push_front(50); // 50,10,20,30,40,50
    cout << " the size of the dequeue is : " << dq.size() << endl;
    cout << " the front element of the dequeue is : " << dq.front() << endl;

    //  deletion of the element from the queue is :

    dq.pop_back();
    dq.pop_back();
    dq.pop_front();
    cout << " the size of the dequeue after the deletion is : " << dq.size() << endl;
    cout << " the front element of the dequeue after the deletion is : " << dq.front() << endl;

    return 0;
}
