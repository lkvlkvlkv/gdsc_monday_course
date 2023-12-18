#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void set_name(string name) {
        this->name = name;
    }
    void set_age(int age) {
        this->age = age;
    }
    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
};

int main() {
    Student studentA;
    studentA.set_name("Nguyen Van A");
    studentA.set_age(20);
    cout << "Name: " << studentA.get_name() << endl;
    cout << "Age: " << studentA.get_age() << endl;
    return 0;
}