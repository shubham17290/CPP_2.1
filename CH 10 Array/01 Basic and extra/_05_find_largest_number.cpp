#include <iostream>
using namespace std;

int main() {
    int num[] = {5, 15, 33, 1, -15, 24};
    int size = 6;
    int largest = INT16_MIN; // -ve  infininty -> lowest number possible
    for (int i = 0; i < size; i++) { // min , max
        if (num[i] > largest) {
            largest = num[i];
        }
       
    }
    cout << "largest = " << largest << endl;

    return 0;
}
