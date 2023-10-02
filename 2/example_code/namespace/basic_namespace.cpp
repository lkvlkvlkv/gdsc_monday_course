#include <iostream>
using namespace std;

namespace my_namespace {
    int a = 3;
}

void way1() {
    using namespace my_namespace;
    cout << a << endl;
}

void way2() {
    using my_namespace::a;
    cout << a << endl;
}

int main() {
    int a = 1;
    cout << a << endl;
    cout << my_namespace::a << endl;
    return 0;
}