#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, world!";
    cout << str << endl;  // Hello, world!

    str.resize(12);
    cout << str << endl; // Hello, world

    str += "!";
    cout << str << endl; // Hello, world!

    str.pop_back();
    cout << str << endl; // Hello, world

    str.push_back('!');
    cout << str << endl; // Hello, world!

    cout << str.substr(0, 5) << endl; // Hello

    cout << str.find("lo,") << endl; // 3

    cout << str.substr(str.find("lo,")) << endl; // lo, world!

    cout << str.replace(str.find("world"), str.length(), "everybody!") << endl; // Hello, everybody!

    str.clear();
    cout << str << endl; // (empty)

    return 0;
}