#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int(*pAry)[3] = arr;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << pAry[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}