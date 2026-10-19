#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wendusday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;

    default:
        cout << "Invlid Day in the week " << endl;
        break;
    }

    return 0;
}
