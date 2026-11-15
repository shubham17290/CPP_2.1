#include <deque>
#include <iostream>
using namespace std;

int main() {

    //  creation of a deque
    deque<int> dq;
    //  insertion of the elements into the dqueue
    dq.push_back(10);  // 10,
    dq.push_back(20);  // 10,20,
    dq.push_back(30);  // 10,20,30,
    dq.push_back(40);  // 10,20,30,40
    dq.push_back(50);  // 10,20,30,40,50
    dq.push_front(50); // 50,10,20,30,40,50
    deque<int>::iterator it = dq.begin();
    while (it != dq.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //  deletion of the element from the queue is :

    dq.pop_back();
    dq.pop_back();
    dq.pop_front();


    return 0;
}
