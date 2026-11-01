#include <iostream>
#include <list>
using namespace std;

int main() {
    //  creating a list
    list<int> myList;
    //  insertion
    myList.push_back(10);
    // 10
    myList.push_back(20);
    //  10->20
    myList.push_back(30);
    //  10->20>30
    myList.push_back(40);
    //  10->20->30->40
    myList.push_front(50);
    //  50->10->20->30->40
    myList.push_front(60);
    //  60->50->10->20->30->40
    if (myList.empty()) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty " << endl;
    }

    return 0;
}
