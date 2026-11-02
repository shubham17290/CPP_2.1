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
    cout << first.size() << endl;     // size of the list is 6
    first.insert(first.begin(), 100); // inserting 100 at the beginning of the list
    first.insert(first.begin(), 200); // inserting 200 at the beginning of the list
    //     now the list will look like this : 200->100->10->20->30->40
    cout << first.size() << endl; // size of the list is 6
    list<int>::iterator it = first.begin();
    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }
    first.erase(first.begin(), first.end()); // erasing the first element of the list

    cout << "\nsee the size of : " << first.size() << endl; // size of the list is 5

    return 0;
}
