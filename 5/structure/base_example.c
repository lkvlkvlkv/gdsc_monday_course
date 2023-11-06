#include <stdio.h>

int main() {
    int n = 10;
    int id[n], grade[n];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (grade[i] > grade[j]) {
                int temp;
                temp = grade[i], grade[i] = grade[j], grade[j] = temp;
                temp = id[i], id[i] = id[j], id[j] = temp;
            }
            else if (grade[i] == grade[j] && id[i] > id[j]) {
                int temp;
                temp = grade[i], grade[i] = grade[j], grade[j] = temp;
                temp = id[i], id[i] = id[j], id[j] = temp;
            }
        }
    }
    return 0;
}