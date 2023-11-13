#include <bits/stdc++.h>
using namespace std;

void increment_pointer(int *a) {
    (*a)++;
}

int main() {
    int a = 3;
    cout << a << endl;  // 3
    increment_pointer(&a);
    cout << a << endl;  // 4
    return 0;
}