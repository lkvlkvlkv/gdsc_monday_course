#include <iostream>
using namespace std;

int main() {
    // type name[row_size][col_size];
    int arr3[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr3[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}