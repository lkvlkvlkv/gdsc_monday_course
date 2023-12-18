#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    cout << "Size: " << dq.size() << endl; // 4
    cout << "Front: " << dq.front() << endl; // 40
    cout << "Back: " << dq.back() << endl; // 20
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}