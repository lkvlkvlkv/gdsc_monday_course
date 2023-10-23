#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        line.push_back(' ');
        int x, sum = 0;
        for (auto &c : line) {
            if (c == ' ') {
                sum += x;
                x = 0;
            }
            else {
                x = x * 10 + c - '0';
            }
        }
        cout << sum << endl;
    }
    return 0;
}