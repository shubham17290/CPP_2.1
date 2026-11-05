#include <iostream>
#include <set>
#include<unordered_set>

using namespace std;

int main() {
    //  creation of the set

    unordered_set<int> st;

    //  insertion inside the set

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);

    //  traverse - > on the set using the iterator

    unordered_set<int>::iterator it = st.begin();
    while (it != st.end()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}
