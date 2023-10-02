#include <iostream>
using namespace std;

void scope_demo() {
    int a = 4, b = 5, c = 6;
    cout << a << " " << b << " " << c << endl;
    return;
}

int main() {
    int a = 1, b = 2, c = 3;
    cout << a << " " << b << " " << c << endl;
    scope_demo();
    return 0;
}