#include <iostream>
using namespace std;

void backtracking(int i, int n, int record[]) {
    if (i == n) {
        for (int i = 0; i < n; i++) {
            cout << record[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int j = 1; j <= n; j++) {
        record[i] = j;
        backtracking(i + 1, n, record);
    }
}

int main() {
    int n;
    cin >> n;
    int record[n];
    backtracking(0, n, record);
    return 0;
}