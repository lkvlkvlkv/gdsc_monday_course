#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1(5);
    vector<int> v2(5, 10);
    vector<int> v3{10, 20, 30};
    vector<int> v4(v3);
    vector<int> v5(v3.begin(), v3.end());
    vector<int> v6(v3.begin(), v3.begin() + 2);
    vector<int> v7(v3.rbegin(), v3.rend());

    print(v1); // Output: 0 0 0 0 0
    print(v2); // Output: 10 10 10 10 10
    print(v3); // Output: 10 20 30
    print(v4); // Output: 10 20 30
    print(v5); // Output: 10 20 30
    print(v6); // Output: 10 20
    print(v7); // Output: 30 20 10
    
    return 0;
}