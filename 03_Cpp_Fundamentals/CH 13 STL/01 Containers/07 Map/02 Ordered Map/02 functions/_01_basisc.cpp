
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main() {

    //  creation of the ordered map
    map<int, string> table;
    //  first operation on the ordered map !
    table.insert(make_pair(1, "love"));
    table.insert(make_pair(2, "anita"));
    table.insert(make_pair(3, "babita"));
    table.insert(make_pair(4, "savita"));



    map<int, string>::iterator it = table.begin();
    while (it != table.end()) {
        pair<int, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    return 0;
}
