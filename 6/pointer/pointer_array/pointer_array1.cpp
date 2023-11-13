#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p[5] = {&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]};
    for (int i = 0; i < 5; i++) {
        cout << *p[i] << " ";
    }
    cout << endl;

    int *p1 = arr;
    for (int i = 0; i < 5; i++) {
        cout << p1[i] << " ";
    }
    cout << endl;
    return 0;
}