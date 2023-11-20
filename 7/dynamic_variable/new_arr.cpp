#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

int* get_array(int* size) {
    int n;
    cin >> n;
    int* p = new int[n];
    *size = n;
    return p;
}

int main() {
    int size;
    int* p = get_array(&size);
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p;
    return 0;
}