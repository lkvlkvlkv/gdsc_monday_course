#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;
    cout << *ptr << endl;  // 1
    cout << ptr[3] << endl;  // 4
    cout << *(ptr + 3) << endl;  // 4
    cout << *(++ptr) << endl;  // 2
    cout << *(ptr++) << endl;  // 2
    return 0;
}