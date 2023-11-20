#include <bits/stdc++.h>
using namespace std;

int b;

void scope() {
    static int a = 3;
    a++;
    cout << a << endl;
    cout << b++ << endl;
    return;
}

int main() {
    scope();
    scope();
    return 0;
}