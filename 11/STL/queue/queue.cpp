#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "Size: " << q.size() << endl;
    return 0;
}