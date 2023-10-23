#include <charconv>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int accumulate(string_view line) {
    static const char delims = ' ';

    int res = 0, x;
    string::size_type pos = 0;
    while (true) {
        pos = line.find_first_not_of(delims, pos);
        if (pos == string::npos) {
            break;
        }
        string::size_type end = line.find_first_of(delims, pos + 1);
        if (end == string::npos) {
            from_chars(line.data() + pos, line.data() + line.size(), x);
            res += x;
            break;
        }
        from_chars(line.data() + pos, line.data() + end - pos, x);
        res += x;
        pos = end + 1;
    }
    return res;
}

int main() {
    string line;
    while (getline(cin, line)) {
        int sum = accumulate(line);
        cout << sum << endl;
    }
    return 0;
}