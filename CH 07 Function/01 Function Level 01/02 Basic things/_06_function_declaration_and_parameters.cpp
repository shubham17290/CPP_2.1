//  lets see the function parameter concept how its works in the function

#include <iostream>
using namespace std;

int sum(int a, int b) { // a and b are the parameters(they are variables)
    int sum = a + b;
    return sum;
}
int diff(int a, int b) { // a and b are the parameters(they are variables)
    int diff = a + b;
    return diff;
}

int main() {

    cout << "mew : you are in the main " << endl;
    int s = sum(4, 5); // 2 , 4  are arguments(they are the constant or fixed values)
    int d = diff(5, 4);
    cout << "diff = " << d << endl;
    cout << "Sum = " << s << endl;

    return 0;
}
