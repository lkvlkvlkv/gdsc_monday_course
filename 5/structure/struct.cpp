#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.gpa = 3.5;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.gpa << endl;

    Student s2 = {"Mary", 35, 4};
    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.gpa << endl;
    return 0;
}