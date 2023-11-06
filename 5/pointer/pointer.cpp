#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 3;
    int *ptr1 = &num;
    int *ptr2 = ptr1;
    cout << "num \t" << num << endl;
    cout << "&num \t" << &num << endl;
    cout << "ptr1 \t" << ptr1 << endl;
    cout << "*ptr1 \t" << *ptr1 << endl;
    cout << "&ptr1 \t" << &ptr1 << endl;
    cout << "ptr2 \t" << ptr2 << endl;
    cout << "*ptr2 \t" << *ptr2 << endl;
    cout << "&ptr2 \t" << &ptr2 << endl;
    return 0;
}