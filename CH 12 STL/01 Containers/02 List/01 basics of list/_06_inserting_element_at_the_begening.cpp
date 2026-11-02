#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    // 10->20->30->40
    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    // 100->200->300->400
 
    list<int>::iterator it = first.begin();

    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }


    return 0;
}
