#include <bits/stdc++.h>
using namespace std;

void traversal(int *arr, int *n) {
    for (int i = 0; i < *n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int *arr, int *n, int index, int value) {
    for (int i = *n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
}

void deletion(int *arr, int *n, int index) {
    for (int i = index; i < *n; i++) {
        arr[i] = arr[i + 1];
    }
}

bool find(int *arr, int *n, int value) {
    for (int i = 0; i < *n; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

void modify(int *arr, int index, int value) {
    arr[index] = value;
}

int main() {
    int n = 5;
    int arr[100];
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    traversal(arr, &n);
    insert(arr, &n, 2, 10);
    deletion(arr, &n, 2);
    find(arr, &n, 2);
    modify(arr, 2, 10);
    delete[] arr;
    return 0;
}