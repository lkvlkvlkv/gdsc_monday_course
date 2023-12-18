#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["a"] = 10;
    m["b"] = 20;
    m["c"] = 30;
    cout << "Size: " << m.size() << endl;  // 3
    cout << "Empty: " << m.empty() << endl;  // 0
    cout << "Count a: " << m.count("a") << endl;  // 1
    cout << "Count d: " << m.count("d") << endl;  // 0

    m["a"] = 40;
    cout << "Size: " << m.size() << endl;  // 3

    m.erase("a");
    cout << "Size: " << m.size() << endl;  // 2

    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    for (auto it : m) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    for (auto [key, value] : m) {
        cout << key << " " << value << endl;
    }
    cout << endl;

    m.clear();
    cout << "Size: " << m.size() << endl;  // 0
    return 0;
}