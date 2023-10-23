#include <iostream>
#include <cctype>
using namespace std;

// https://cplusplus.com/reference/cctype/

int main() {
    char d = '0', a = 'a', A = 'A';

    cout << isdigit(d) << endl;
    cout << isalpha(a) << endl;
    cout << islower(a) << endl;
    cout << isupper(A) << endl;
    cout << char(toupper(a)) << endl;

    return 0;
}