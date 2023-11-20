#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *len = new int[n];
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        cin >> len[i];
        arr[i] = new int[len[i]];
        for (int j = 0; j < len[i]; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    delete[] len;
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    return 0;
}