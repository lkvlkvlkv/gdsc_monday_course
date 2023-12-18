#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;
    pq.pop();
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;
    pq.pop();
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;
    return 0;
}