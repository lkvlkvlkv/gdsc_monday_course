#include <bits/stdc++.h>
using namespace std;

void scope() {
    int a = 3;
    a++;
    cout << a << endl;
    return;
}

int main() {
    scope();
    scope();
    return 0;
}