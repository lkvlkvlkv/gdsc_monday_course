#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    cout << str << endl;

    cout << str.length() << endl;

    string a = "a", b = "b";
    cout << a + b << endl;

    a = b;
    cout << a << " " << b << endl;

    cout << (a < b) << endl;
    cout << (a == b) << endl;
    cout << (a > b) << endl;

    return 0;
}