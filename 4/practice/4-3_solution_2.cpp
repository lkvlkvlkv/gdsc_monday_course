#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line;
    stringstream ss;
    while (getline(cin, line)) {
        ss.clear();
        ss.str(line);
        int x, sum = 0;
        while (ss >> x) {
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}