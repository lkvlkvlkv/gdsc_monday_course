#include <iostream>
using namespace std;

int main() {
    char d = '9', a = 'x', A = 'H';

    cout << d - '0' << endl;
    cout << a - 'a' << endl;
    cout << A - 'A' << endl;

    cout << char(a ^ 32) << endl;
    cout << char(A ^ 32) << endl;

    return 0;
}