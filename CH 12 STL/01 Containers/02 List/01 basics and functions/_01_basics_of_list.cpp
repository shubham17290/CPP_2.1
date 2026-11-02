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
    myList.pop_back();  // Removes 40
    myList.pop_front(); // Removes 60
    //  now the list is : 50->10->20->30
    cout << myList.size() << endl; // 4
    //  now clearing the list
    myList.clear();
    cout << myList.size() << endl; // 0

    return 0;
}
