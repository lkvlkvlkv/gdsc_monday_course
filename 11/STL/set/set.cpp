#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(30);

    cout << "Size: " << st.size() << endl; // 3
    cout << "Empty: " << st.empty() << endl; // 0
    cout << "Count 10: " << st.count(10) << endl; // 1
    cout << "Count 40: " << st.count(40) << endl; // 0

    st.insert(10);
    cout << "Size: " << st.size() << endl; // 3

    st.erase(10);
    cout << "Size: " << st.size() << endl; // 2

    st.erase(st.begin());
    cout << "Size: " << st.size() << endl; // 1

    st.clear();
    cout << "Size: " << st.size() << endl; // 0
    return 0;
}