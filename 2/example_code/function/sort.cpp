#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}