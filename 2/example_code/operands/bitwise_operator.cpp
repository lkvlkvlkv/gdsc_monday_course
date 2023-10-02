#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;               // 3 = 0011, 5 = 0101

    int bitwiseAnd = a & b;         // 1 = 0001 & 0101 = 0001
    int bitwiseOr = a | b;          // 7 = 0001 | 0101 = 0111
    int bitwiseXor = a ^ b;         // 6 = 0001 ^ 0101 = 0110
    int bitwiseNot = ~a;            // -4 = ~0001 = 1110
    int bitwiseLeftShift = a << 1;  // 6 = 0001 << 1 = 0110
    int bitwiseRightShift = a >> 1; // 1 = 0001 >> 1 = 0001

    return 0;
}