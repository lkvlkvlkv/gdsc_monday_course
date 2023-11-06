#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << "arr\t = " << arr << endl;
    cout << "&arr[0]\t = " << &arr[0] << endl;
    cout << "ptr\t = " << ptr << endl << endl;

    for (int i = 0; i < 5; i++) {
        cout << "&arr[" << i << "]\t = " << &arr[i] << endl;
    }
    return 0;
}