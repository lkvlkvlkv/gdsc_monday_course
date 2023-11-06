#include <stdio.h>

// 定義方式 1
struct Student {
    char name[32];
    int age;
    double gpa;
};

// 定義方式 2
typedef struct Student Student;

// 定義方式 3
typedef struct Student {
    char name[32];
    int age;
    double gpa;
} Student;

int main() {
    // 定義方式 1
    struct Student s1;
    // 定義方式 1 + 2 or 定義方式 3
    Student s2;
    return 0;
}