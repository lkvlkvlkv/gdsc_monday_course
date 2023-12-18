#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st = {1,2,3,4,5};
    for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}