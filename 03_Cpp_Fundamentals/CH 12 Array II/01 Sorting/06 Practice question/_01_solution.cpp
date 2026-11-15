#include <iostream>
using namespace std;

int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(ch[0]);

    // Insertion Sort (Descending Order)
    for (int i = 1; i < n; i++) {
        char key = ch[i]; // Jis element ko insert karna hai
        int j = i - 1;

        // Agar pichla element key se CHOTA hai, toh use aage shift karo
        // (Kyunki descending order hai, bada element pehle aayega)
        while (j >= 0 && ch[j] < key) {
            ch[j + 1] = ch[j];
            j--;
        }

        // Sahi jagah pe key ko rakh do
        ch[j + 1] = key;
    }

    // Output print karo
    cout << "Sorted in Descending: ";
    for (int i = 0; i < n; i++) {
        cout << ch[i] << " ";
    }
    return 0;
}
