#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) {
for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    bubble_sort(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}