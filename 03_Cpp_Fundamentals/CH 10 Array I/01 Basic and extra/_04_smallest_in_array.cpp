#include <iostream>
using namespace std;

int main() {
    int num[] = {5, 15, 33, 1, -15, 24};
    int size = 6;
    int smallest = INT16_MAX; // +ve  infininty -> highest number possible
    int largest = INT16_MIN;
    for (int i = 0; i < size; i++) {
        smallest = min(num[i], smallest); // function int cpp
        largest = max(num[i], largest);   // function int cpp
    }
    cout << "Smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    return 0;
}
