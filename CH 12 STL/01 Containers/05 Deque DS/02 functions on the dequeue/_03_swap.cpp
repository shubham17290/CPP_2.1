#include <deque>
#include <iostream>
using namespace std;

int main() {

    //  creation of a deque
    deque<int> first;
    //  insertion of the elements into the dqueue
    first.push_back(10);  // 10,
    first.push_back(20);  // 10,20,
    first.push_back(30);  // 10,20,30,
    first.push_back(40);  // 10,20,30,40
    first.push_back(50);  // 10,20,30,40,50
    first.push_front(50); // 50,10,20,30,40,50
    cout << " the size of the dequeue before swapping is : " << first.size() << endl;
    deque<int>::iterator it = first.begin();
    while (it != first.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //  creation of another deque
    deque<int> second;
    //  insertion of the elements into the dqueue
    second.push_back(60);   // 60,
    second.push_back(70);   // 60,70,
    second.push_back(80);   // 60,70,80,
    second.push_back(90);   // 60,70,80,90
    second.push_back(100);  // 60,70,80,90,100
    second.push_front(100); // 100,60,70,80,90,100

    cout << " the size of the second dequeue is : " << second.size() << endl;
    deque<int>::iterator it2 = second.begin();
    while (it2 != second.end()) {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl; 

    //  swapping the elements of the two deques
    first.swap(second);

    cout << " the size of the first dequeue after swapping is : " << first.size() << endl;
    deque<int>::iterator it3 = first.begin();
    while (it3 != first.end()) {
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    cout << " the size of the second dequeue after swapping is : " << second.size() << endl;
    deque<int>::iterator it4 = second.begin();
    while (it4 != second.end()) {
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;

    return 0;
}