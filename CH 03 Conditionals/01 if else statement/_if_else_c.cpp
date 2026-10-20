#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age sir : \n";
    cin >> age;
    if (age >= 19) {
        cout << "you can vote" << endl;
    }
    if (age >= 45) {
        cout << "and you also can contest for election" << endl;
    } else {
        cout << "you can not vote" << endl;
    }

    return 0;
}
