#include <iostream>
#include <queue>
using namespace std;

int main() {
    //  creating a queue
    queue<int> q;

    //  emplace constructs the element in place at the rear
    q.emplace(10);
    q.emplace(20);
    q.emplace(30);
    q.emplace(40);
    // 10,20,30,40

    cout << "front : " << q.front() << endl; // 10
    cout << "back  : " << q.back() << endl;  // 40
    cout << "size  : " << q.size() << endl;  // 4

    return 0;
}