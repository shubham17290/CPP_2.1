#include <iostream>
using namespace std;

int main() {

    //  input the length of array
    int n;
    cout << "enter the size of the array : " << endl;
    cin >> n;
    int arr[n];

    // int n = sizeof(arr) / sizeof(int);

    cout << "Enter array values sir:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "here is your array values : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , ";
    }
    return 0;
}
