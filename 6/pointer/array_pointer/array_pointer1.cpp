#include <bits/stdc++.h>
using namespace std;

void print_array(int (*p)[3]) {
    for (int i = 0; i < 3; i++) {
        cout << (*p)[3] << " ";
    }
}

void print_array(int *p) {
    for (int i = 0; i < 3; i++) {
        cout << p[3] << " ";
    }
}

int main() {
    int arr[3] = {1, 2, 3};
    int(*p)[3] = &arr;
    print_array(p);

    int *p1 = arr;
    print_array(p1);
    return 0;
}