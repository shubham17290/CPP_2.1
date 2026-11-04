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
    if (st.count(15) == 1) {
        cout << " found " << endl;
    }
    if (st.count(15) == 0) {
        cout << " not found " << endl;
    }

    return 0;
}
