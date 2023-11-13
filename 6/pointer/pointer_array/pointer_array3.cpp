#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    int *p[2] = {arr1, arr2};
    int arr_len[2] = {3, 5};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < arr_len[i]; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
    return 0;
}