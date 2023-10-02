#include <iostream>
using namespace std;

int main() {
    // type name[size];
    int arr[16];
    bool visited[7];

    int arr1[5] = {};      // 0 0 0 0 0
    int arr2[5] = {1, 2};  // 1 2 0 0 0

    cout << arr1[0] << " " << arr2[0] << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";  // 1 2 0 0 0
    }
    cout << endl;

    return 0;
}