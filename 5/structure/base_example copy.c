#include <stdio.h>

typedef struct student {
    int id;
    int grade;
} Student;

int main() {
    int n = 10;
    Student students[n];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].grade > students[j].grade) {
                Student temp;
                temp = students[i], students[i] = students[j], students[j] = temp;
            }
            else if (students[i].grade == students[j].grade && students[i].id > students[j].id) {
                Student temp;
                temp = students[i], students[i] = students[j], students[j] = temp;
            }
        }
    }
    return 0;
}