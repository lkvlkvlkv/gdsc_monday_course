#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 3, 4};
    
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    cout << "Unique: ";
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;

    next_permutation(v.begin(), v.end());
    cout << "Next permutation: ";
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;

    prev_permutation(v.begin(), v.end());
    cout << "Prev permutation: ";
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}