#include <iostream>
using namespace std;

void increment(int a) {
    a++;
    return;
}

void increment_reference(int &a) {
    a++;
    return;
}

int main() {
    int a = 3;
    increment(a);
    cout << a << endl;
    increment_reference(a);
    cout << a << endl;
    return 0;
}