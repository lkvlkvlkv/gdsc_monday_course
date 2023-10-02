#include <iostream>
using namespace std;

int i = 0;

void func() {
    cout << i << " ";
    int i = 4;
    cout << i << " ";
    {
        cout << i << " ";
        int i = 5;
        cout << i << " ";
    }
    cout << i << " ";
    return;
}

int main() {
    cout << i << " ";
    int i = 1;
    cout << i << " ";
    for (int i = 2; i < 3; i++) {
        cout << i << " ";
        if (true) {
            cout << i << " ";
            int i = 3;
            cout << i << " ";
            func();
            cout << i << " ";
        }
        cout << i << " ";
    }
    cout << i << " ";
    return 0;
}