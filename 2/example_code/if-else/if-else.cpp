#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;

    if (a < b) {
        cout << "a < b" << endl;
    }
    else if (a == b) {
        cout << "a = b" << endl;
    }
    else {
        cout << "a > b" << endl;
    }
    
    return 0;
}