#include <stdio.h>

int* get_int() {
    int* p = (int*)malloc(sizeof(int));
    *p = 10;
    return p;
}

int main() {
    int* p = get_int();
    printf("%d\n", p);
    free(p);
    return 0;
}