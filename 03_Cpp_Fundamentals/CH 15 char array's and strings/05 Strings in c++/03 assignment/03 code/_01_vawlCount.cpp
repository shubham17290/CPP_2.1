// WAP to count the vowels in the given string
#include <iostream>
#include <string> // Fix 1: <string> was missing
using namespace std;

int vowlCount(string vawl) {
    int vawlcount = 0;
    for (int i = 0; i < (int)vawl.length(); i++) {
        // Fix 2: commas `,` → logical OR `||`  (this was the main bug)
        if (vawl[i] == 'a' || vawl[i] == 'e' || vawl[i] == 'i' || vawl[i] == 'o' ||
            vawl[i] == 'u') {
            vawlcount++;
        }
    }
    return vawlcount;
}

int main() {
    string vawl = "Hi sir how are you and how's going ";
    cout << vowlCount(vawl) << endl;

    return 0;
}
