#include <iostream>
using namespace std;

/*
Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
(Assume N >= 2)
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
This is a series where each number is a sum of previous 2 numbers in the series.
Eg : 1 = 0 + 1,
2 = 1 + 1,
3 = 1 + 2,
5 = 2 + 3,
8 = 3 + 5 & so on.
*/
int main() {
    int n;
    cout << "Enter N (N >= 2): ";
    cin >> n;

    long long a = 0, b = 1;

    cout << "First " << n << " Fibonacci numbers: ";
    cout << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        long long next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
