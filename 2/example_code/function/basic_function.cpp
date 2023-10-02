#include <iostream>
using namespace std;

/*
return_type function_name(type1 arg1, type2 arg2, ...) {
    // function body
    return return_value;
}
*/

void print_num(int x) {
    cout << x << endl;
    return;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 1, b = 2;
    int c = add(a, b);

    print_num(c);
    return 0;
}