#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];
    //  this loop will take input of array element and element will be only 5 !
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl; // trevarse the all the elements of the array !
    }

    return 0;
}
