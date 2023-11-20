#include <bits/stdc++.h>
using namespace std;

int *get_int() {
    int p = 10;
    return &p;
}

int main() {
    int *p = get_int();
    cout << *p << endl;
    delete p;
    return 0;
}