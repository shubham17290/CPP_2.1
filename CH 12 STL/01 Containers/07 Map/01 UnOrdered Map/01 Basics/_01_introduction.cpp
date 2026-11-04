
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main() {

    //  creation of the unordered_map
    unordered_map<string, string> table;
    //  insertion
    //  method 01
    table["in"] = "india";
    //  method 02
    table.insert((make_pair)("en", "england"));

    //  by making the pairs : method 03

    pair<string, string> p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p);
    cout << table.size() << endl;

    /*if (table.empty()) {
        cout << "map is empty ";

    } else {
        cout << " map is not empty ";
    }
*/


    return 0;
}
