#include <iostream>
#include <string>
using namespace std;

int main() {
    string num1 = "123", num2 = "123.456";

    cout << stoi(num1) << endl;
    cout << stof(num2) << endl;
    cout << stoll(num1) << endl;
    
    return 0;
}