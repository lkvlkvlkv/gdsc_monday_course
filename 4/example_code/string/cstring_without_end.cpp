#include <iostream>
using namespace std;

int main() {
    char str1[6] = {'h', 'e', 'l', 'l', 'o'};
    cout << str1 << endl;

    char str2[5] = {'h', 'e', 'l', 'l', 'o'};
    cout << str2 << endl;

    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << str3 << endl;
    
    return 0;
}