#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *len = (int *)malloc(sizeof(int) * n);
    int **arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &len[i]);
        arr[i] = (int *)malloc(sizeof(int) * len[i]);
        for (int j = 0; j < len[i]; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    free(len);
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    return 0;
}