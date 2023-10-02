#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int factorial[n + 1];
    factorial[0] = 1;
    for (int i = 1; i <= n; i++) {
        factorial[i] = factorial[i - 1] * i;
    }
    cout << factorial[5] << endl;
    return 0;
}