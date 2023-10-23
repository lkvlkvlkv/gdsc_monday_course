#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, world!";
    cout << str << endl;

    cout << strlen(str) << endl;

    char a[] = "a", b[] = "b";
    cout << strcat(a, b) << endl;

    strcpy(a, b);
    cout << a << " " << b << endl;

    cout << (strcmp(a, b) == 1) << endl;
    cout << (strcmp(a, b) == 0) << endl;
    cout << (strcmp(a, b) == -1) << endl;

    return 0;
}