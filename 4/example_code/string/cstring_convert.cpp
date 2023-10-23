#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char num1[] = "123", num2[] = "123.456";

    cout << atoi(num1) << endl;
    cout << atof(num2) << endl;
    cout << atoll(num1) << endl;

    return 0;
}