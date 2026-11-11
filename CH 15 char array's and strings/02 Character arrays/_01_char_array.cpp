#include <iostream>
using namespace std;

int main() {
    //  the example of the character array
    char arr[6] = {'a', 'b', 'c', 'd', 'e', 'd'};
    int n = sizeof(arr) / sizeof(char);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    cout << arr << endl;
    return 0;
}
