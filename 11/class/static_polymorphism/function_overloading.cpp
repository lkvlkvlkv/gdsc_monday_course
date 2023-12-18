#include <iostream>
using namespace std;

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(char const *str) {
    cout << "Printing string: " << str << endl;
}

int main() {
    print(5);
    print(3.14);
    print("Hello, world!");

    return 0;
}