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
    cout << "Before swapping the two lists : " << endl;
    list<int>::iterator it = first.begin(); // start karo , first element se

    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }

    cout << "\nAfter swapping the two lists : " << endl;
    first.swap(second); // swapping the two lists

    list<int>::iterator it1 = first.begin(); // start karo , first element se

    while (it1 != first.end()) {
        cout << *it1 << " ";
        it1++;
    }

    return 0;
}
