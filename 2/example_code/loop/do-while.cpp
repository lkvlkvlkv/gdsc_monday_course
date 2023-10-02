#include <iostream>
using namespace std;

int main() {
    /*
    do {
        statement(s);
    } while (condition);
    */
    int a = 5;
    while (a < 5) {
        cout << a << endl;  // nothing
    }

    do {
        cout << a << endl;  // 5
    } while (a < 5);
    return 0;
}