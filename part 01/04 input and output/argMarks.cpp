#include <iostream>
using namespace std;
int main() {
    int toc;

    int os;

    int cn;

    int _c_dsa;

    int cd;

    int dl;

    int coa;
    int apti;
    cout << "Enter you toc marks : ";
    cin >> toc;
    cout << "Enter you os marks : ";
    cin >> os;
    cout << "Enter you cn marks : ";
    cin >> cn;
    cout << "Enter you cd marks : ";
    cin >> cd;
    cout << "Enter you dl marks : ";
    cin >> dl;
    cout << "Enter you _c_dsa_ marks : ";
    cin >> _c_dsa;
    cout << "Enter you coa marks : ";
    cin >> coa;
    cout << "Enter you apti marks : ";
    cin >> apti;
    int total;
    total = toc + os + cd + dl + cn + apti + _c_dsa + coa;
    float avg;

    avg = total / 8;
    cout << "your average marks is : " << avg << endl;

    return 0;
}
