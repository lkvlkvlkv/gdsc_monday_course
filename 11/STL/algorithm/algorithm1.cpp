#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 2, 5, 4};
    sort(v.begin(), v.end());
    cout << "Sorted: ";
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
    
    nth_element(v.begin(), v.begin() + 2, v.end());
    cout << "Nth element: " << *(v.begin() + 2) << endl;

    int target = 3;
    auto it = lower_bound(v.begin(), v.end(), target);
    if (it == v.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "Lower bound: " << *it << endl;
    }

    it = upper_bound(v.begin(), v.end(), target);
    if (it == v.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "Upper bound: " << *it << endl;
    }

    return 0;
}