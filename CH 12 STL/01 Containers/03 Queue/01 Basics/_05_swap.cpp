#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> first;
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    // 10,20,30,40

    queue<int> second;
    second.push(100);
    second.push(200);
    second.push(300);
    second.push(400);
    // 100,200,300,400

    cout << "Before swapping :" << endl;
    cout << "first front : " << first.front() << "  size : " << first.size() << endl;
    cout << "second front : " << second.front() << "  size : " << second.size() << endl;

    first.swap(second); // swapping the two queues

    cout << "After swapping :" << endl;
    cout << "first front : " << first.front() << "  size : " << first.size() << endl;
    cout << "second front : " << second.front() << "  size : " << second.size() << endl;

    return 0;
}