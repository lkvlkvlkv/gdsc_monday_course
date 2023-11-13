#include <bits/stdc++.h>
using namespace std;

void print_array(int *arr[2], int m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p[2] = {arr[0], arr[1]};
    print_array(p, 3);
    return 0;
}