#include <iostream>
using namespace std;

bool is_valid(string &s, int base) {
    long long sum = 0;
    for (auto &c : s) {
        sum = (sum * base) % (base - 1);
        if (isdigit(c)) {
            if (c - '0' >= base) {
                return false;
            }
            sum += c - '0';
        }
        if (isupper(c)) {
            if (c - 'A' + 10 >= base) {
                return false;
            }
            sum += c - 'A' + 10;
        }
        if (islower(c)) {
            if (c - 'a' + 36 >= base) {
                return false;
            }
            sum += c - 'a' + 36;
        }
    }
    if (sum % (base - 1) == 0) {
        return true;
    }
    return false;
}

void solve(string &s) {
    for (int base = 2; base <= 62; base++) {
        if (is_valid(s, base)) {
            cout << base << endl;
            return;
        }
    }
    cout << "such number is impossible!" << endl;
}

int main() {
    string s;
    while (cin >> s) {
        solve(s);
    }
    return 0;
}