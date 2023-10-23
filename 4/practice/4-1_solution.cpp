#include <iostream>
using namespace std;

bool check(string &res, string &s, int j) {
    for (int k = 0; k < j; k++) {
        if (res[res.size() - j + k] != s[k]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int k, w;
    cin >> k >> w;
    string res;
    cin >> res;
    for (int i = 1; i < w; i++) {
        string s;
        cin >> s;
        int done = 0;
        for (int j = s.size(); j >= 1; j--) {
            // int valid = check(res, s, j);
            // if (valid) {
            if (res.substr(res.size() - j) == s.substr(0, j)) {
                done = 1;
                for (int k = j; k < s.size(); k++) {
                    res += s[k];
                }
                break;
            }
        }
        if (!done) {
            for (auto c : s) {
                res += c;
            }
        }
    }
    cout << res.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}