#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Size: " << st.size() << endl; // 3
    cout << "Top: " << st.top() << endl; // 30
    st.pop();
    cout << "Size: " << st.size() << endl; // 2
    cout << "Top: " << st.top() << endl; // 20
    st.pop();
    cout << "Size: " << st.size() << endl; // 1
    cout << "Top: " << st.top() << endl; // 10
    return 0;
}