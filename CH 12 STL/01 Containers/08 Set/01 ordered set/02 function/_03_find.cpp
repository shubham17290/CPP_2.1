#include <iostream>
#include <set>

using namespace std;

int main() {
    //  creation of the set

    set<int> st;

    //  insertion inside the set

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);

    //  finding till the end
    if (st.find(15) != st.end()) {
        cout << " found " << endl;
    } else {
        cout << " not found " << endl;
    }

    return 0;
}
