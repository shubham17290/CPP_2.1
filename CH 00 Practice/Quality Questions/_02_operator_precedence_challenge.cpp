#include <iostream>
using namespace std;

// Quality question: predict the output given operator precedence.
int main() {
    int x = 5;
    int result = x++ + ++x * 2 - --x;
    cout << "result = " << result << endl;
    cout << "x = " << x << endl;
    return 0;
}
