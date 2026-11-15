// Function parameters and arguments

#include <iostream>
using namespace std;

int sum(int a, int b = 1) { // a and b are parameters but here b is primerly declared , and it
                            // doesn't need any argument to pass here
    int sum = a + b;
    return sum;
}

int diff(int a, int b) { // a and b are parameters
    int diff = a - b;
    return diff;
}

int main() {
    int s = sum(2); // just one simple argument inside the function
    cout << "sum = " << s << endl;
    return 0;
}
