#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    cout << "Size: " << v.size() << endl; // 2
    cout << "Back: " << v.back() << endl; // 20
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    v.clear();
    cout << "Size: " << v.size() << endl; // 0
    return 0;
}