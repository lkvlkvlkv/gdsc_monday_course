#include <iostream>
using namespace std;

int main() {
    char d = '0', a = 'a', A = 'A';

    cout << (d >= '0' && d <= '9') << endl;
    cout << ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z')) << endl;
    cout << (d >= 'a' && d <= 'z') << endl;
    cout << (d >= 'A' && d <= 'Z') << endl;
    cout << char(a - 'a' + 'A') << endl;

    return 0;
}