#include <bits/stdc++.h>
using namespace std;

void print_array(int *arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i * m + j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_array((int *)arr, 2, 3);
    return 0;
}