//  calculation of the average of the three numbers
#include <iostream>
using namespace std;
int main() {
    float m1, m2, m3, average;
    cout << " enter marks of the three subjects: ";
    cin >> m1 >> m2 >> m3;
    average = (m1 + m2 + m3) / 3;
    cout << "average marks = " << average;
    return 0;
}
