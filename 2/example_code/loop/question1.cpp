#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i == 7) {
            break;
        }
        cout << i << " ";  // 1 3 5
    }
    cout << endl;
    return 0;
}