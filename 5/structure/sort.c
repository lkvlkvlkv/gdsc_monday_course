// #include "Capture.h"

#include <stdbool.h>
#include <stdio.h>

void sort() {
    int cp[32][2] = {}, idx = 32;
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (cp[i][0] < cp[j][0]) {
                int temp;
                temp = cp[i][0], cp[i][0] = cp[j][0], cp[j][0] = temp;
                temp = cp[i][1], cp[i][1] = cp[j][1], cp[j][1] = temp;
            }
            else if (cp[i][0] == cp[j][0] && cp[i][1] < cp[j][1]) {
                int temp;
                temp = cp[i][0], cp[i][0] = cp[j][0], cp[j][0] = temp;
                temp = cp[i][1], cp[i][1] = cp[j][1], cp[j][1] = temp;
            }
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%d is captured by %d\n", cp[i][0], cp[i][1]);
    }
}