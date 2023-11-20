#include <stdio.h>

int* get_array(int* size) {
    int n;
    scanf("%d", &n);
    int* p = (int*)malloc(sizeof(int) * n);
    *size = n;
    return p;
}

int main() {
    int size;
    int* p = get_array(&size);
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}