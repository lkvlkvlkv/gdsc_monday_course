#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 4; a++) {
        for (int b = 1; b <= 4; b++) {
            if (a == b) continue;
            for (int c = 1; c <= 4; c++) {
                if (a == c || b == c) continue;
                for (int d = 1; d <= 4; d++) {
                    if (a == d || b == d || c == d) continue;
                    cout << a << " " << b << " " << c << " " << d << endl;
                }
            }
        }
    }
    return 0;
}