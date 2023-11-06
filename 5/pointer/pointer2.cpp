#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 3;
    int *ptr = &num;
    cout << "num \t" << num << endl;
    cout << "&num \t" << &num << endl;
    cout << "ptr \t" << ptr << endl;
    cout << "*ptr \t" << *ptr << endl;
    cout << "&ptr \t" << &ptr << endl;
    cout << "ptr+1 \t" << ptr + 1 << endl;
    cout << "ptr-2 \t" << ptr - 2 << endl;
    return 0;
}