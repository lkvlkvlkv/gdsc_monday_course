#include <iostream>
using namespace std;

int main() {
    char a, b;

    a = cin.get();

    cin.get(b);

    cout << a << " " << b << endl;

    cin.get(a).get(b);

    return 0;
}