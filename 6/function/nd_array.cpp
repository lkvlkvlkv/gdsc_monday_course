#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2 * 3; i++) {
        cout << *((int *)arr + i) << " \n"[i % 3 == 2];
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
    return 0;
}