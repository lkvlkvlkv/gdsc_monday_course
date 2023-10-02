#include <iostream>
using namespace std;

int main() {
    int result = 3 * (2 + 5);  // 21

    int a = 3, b = 5, temp;

    a = b; // a = 5, b = 5
    b = a; // a = 5, b = 5

    a = 3, b = 5;
    temp = a; // temp = 3, a = 3, b = 5
    a = b;    // temp = 3, a = 5, b = 5
    b = temp; // temp = 3, a = 5, b = 3

    swap(a, b); // from algorithm library

    temp = a, a = b, b = temp; // use comma operator

    return 0;
}