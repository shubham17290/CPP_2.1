#include <iostream>
using namespace std;
//  lets , see the how to take the input in the matrix (2D)
int main() {
    int n = 3, m = 4;
    int arr[3][4]; // this will take 12 values..
                   // this is how we take input inside the 2d array !
    cout << "Enter numbers here sir : " << endl;
    for (int i = 0; i < n; i++) // n -> 0,1,2
    {
        for (int j = 0; j < m; j++) // m -> 0,1,2,3
        {
            cin >> arr[i][j];
        }
    }
    // this is how we traverse the 2d array !
    int count = 0;
    for (int i = 0; i < n; i++) // n -> 0,1,2
    {
        for (int j = 0; j < m; j++) // m -> 0,1,2,3
        {
            cout << arr[i][j] << "    ";
            count++;
        }
        cout << endl;
    }
    cout << "see how many times the loop runed: " << count << endl;

    return 0;
}
