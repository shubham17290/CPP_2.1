
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

    cout << table.at("in") << endl; // this return the -> value buy using the key only
    //  method 01:
    table.at("in") = "india2";
    cout << table.at("in") << endl;
    //  method 02;
    table["in"] = "india3"; // value on the key has changed now
    cout << table.at("in") << endl;

    // creating the iterator
    unordered_map<string, string>::iterator it = table.begin();
    while (it != table.end()) {
        pair<string, string> p = *it;
        cout << p.first << " -> " << p.second << endl;
        it++;
    }
    cout << table.size() << endl;
    return 0;
}
