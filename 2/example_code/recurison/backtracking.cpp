#include <iostream>
using namespace std;

void arrangement(int i, bool used[], int record[], int n) {
    if (i == n) {
        for (int j = 0; j < n; j++) {
            cout << record[j] << " ";
        }
        cout << endl;
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (used[j]) continue;
        record[i] = j, used[j] = true;
        arrangement(i + 1, used, record, n);
        record[i] = -1, used[j] = false;
    }
    float a;
    printf("%.2f", a);
}

int main() {
    int n;
    cin >> n;
    bool used[n + 1];
    fill(used, used + n + 1, false);
    int record[n + 1];
    fill(record, record + n + 1, -1);
    arrangement(0, used, record, n);
    return 0;
}