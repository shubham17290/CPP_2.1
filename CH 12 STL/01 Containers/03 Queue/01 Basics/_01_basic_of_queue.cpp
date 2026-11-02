#include <iostream>
#include <queue>
using namespace std;

int main() {

    //  creating a queue
    queue<int> q;
    //  insertion and deletion

    q.push(10);
    // 10
    q.push(20);
    //10,20
    q.push(30);
    //10,20,30
    q.push(40);
    //10,20,30,40
    cout <<q.size()<<endl;


    return 0;
}
