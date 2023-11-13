#include <bits/stdc++.h>
using namespace std;

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void increment_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i]++;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print_array(arr, 5);
    increment_array(arr, 5);
    print_array(arr, 5);
    return 0;
}