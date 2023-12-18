#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);
    
    cout << "Size: " << ms.size() << endl; // 4
    cout << "Empty: " << ms.empty() << endl; // 0
    cout << "Count 10: " << ms.count(10) << endl; // 2
    cout << "Count 40: " << ms.count(40) << endl; // 0

    ms.erase(10);
    cout << "Size: " << ms.size() << endl; // 2

    auto it = ms.find(20);
    ms.erase(it);
    cout << "Size: " << ms.size() << endl; // 2

    ms.clear();
    cout << "Size: " << ms.size() << endl; // 0
    return 0;
}