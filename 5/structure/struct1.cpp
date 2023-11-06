#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;

    void init(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    void print_info() {
        cout << name << endl;
        cout << age << endl;
        cout << gpa << endl;
    }

} s1, s2;

int main() {
    s1.init("John", 20, 3.5);
    s1.print_info();

    s2 = {"Mary", 35, 4};
    s2.print_info();
    return 0;
}