#include <bits/stdc++.h>
using namespace std;

int *get_int() {
    int *p = new int;
    *p = 10;
    return p;
}

int main() {
    int* p = get_int();
    printf("%d\n", p);
    delete p;
    return 0;
}