#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    stringstream ss;

    string str = "123 123.456";
    ss << str;

    int num1;
    float num2;
    
    ss >> num1 >> num2;
    cout << num1 << " " << num2 << endl;
    return 0;
}