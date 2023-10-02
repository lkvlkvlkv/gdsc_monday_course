#include <iostream>
using namespace std;

namespace outer {
    int a = 3;

    namespace inner {
        int a = 5;
    }
}

void way1() {
    cout << outer::inner::a << endl;
}

void way2() {
    using namespace outer;
    cout << inner::a << endl;
}

void way3() {
    using namespace outer::inner;
    cout << a << endl;
}

void way4() {
    using outer::inner::a;
    cout << a << endl;
}

int main() {
    way1();
    way2();
    way3();
    way4();
    return 0;
}