#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;

    int sum = a + b;         // sum = 8
    int difference = a - b;  // difference = -2
    int product = a * b;     // product = 15
    int quotient = a / b;    // quotient = 0
    int remainder = a % b;   // remainder = 3

    a += b;  // a = a + b;
    a -= b;  // a = a-- b;
    a *= b;  // a = a * b;
    a /= b;  // a = a / b;
    a %= b;  // a = a % b;

    int x = 5;
    int y = x++;  // x = 6, y = 5
    int z = ++x;  // x = 7, z = 7

    x = 5;
    y = --x;  // x = 4, y = 4
    z = x--;  // x = 3, z = 4

    return 0;
}