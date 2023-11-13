#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5;
    void *ptr = &a;
    cout << *ptr << endl; // error
    cout << *(int *)ptr << endl;  // 5
    cout << *(char *)ptr << endl; // 
    cout << *(double *)ptr << endl;  // 2.12199e-314
    return 0;
}