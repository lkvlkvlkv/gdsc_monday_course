#include <bits/stdc++.h>
using namespace std;

void print_array(int (*arr)[3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_array(arr, 2);
    return 0;
}