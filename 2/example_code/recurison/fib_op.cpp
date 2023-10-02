#include <iostream>
using namespace std;

int fib(int f[], int n) {
    if (n <= 1) return n;
    if (f[n] != -1) return f[n];
    int value = fib(f, n - 1) + fib(f, n - 2);
    f[n] = value;
    return f[n];
}

int main() {
    int n;
    cin >> n;
    int f[n + 1];
    fill(f, f + n + 1, -1);
    f[0] = 0, f[1] = 1;
    cout << fib(f, n) << endl;
    return 0;
}