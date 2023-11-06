// #include "Capture.h"

#include <stdbool.h>
#include <stdio.h>

typedef struct capture_pair {
    int eat;
    int be_eaten;
} CP;

void sort() {
    CP cp[32];
    int cp[32][2] = {}, idx = 32;
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (cp[i].be_eaten < cp[j].be_eaten) {
                CP temp;
                temp = cp[i], cp[i] = cp[j], cp[j] = temp;
            }
            else if (cp[i].be_eaten == cp[j].be_eaten && cp[i].eat < cp[i].eat) {
                CP temp;
                temp = cp[i], cp[i] = cp[j], cp[j] = temp;
            }
        }
    }
    for (int i = 0; i < idx; i++) {
        printf("%d is captured by %d\n", cp[i].be_eaten, cp[i].eat);
    }
}