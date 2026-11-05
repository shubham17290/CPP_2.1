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

    //  traverse - > on the set using the iterator

    set<int>::iterator it = st.begin();
    while (it != st.end()) {
        cout << *it << " ";
        it++;
    }

    st.erase(st.begin(), st.end());
    cout << endl << st.size() << endl;

    return 0;
}
