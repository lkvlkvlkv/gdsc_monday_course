#include <stdio.h>
#include <stdlib.h>

void fill_array(int *ptr[], int n);

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; i++) {
        arr[i] = 0;
    }
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int *ptr[n];
    for (int i = 0; i < n; i++) {
        ptr[i] = &arr[A[i]];
    }
    fill_array(ptr, n);
    for (int i = 0; i < m; i++)
        printf("%d%c", arr[i], " \n"[i == m - 1]);
    return 0;
}

int cmp(const void *a, const void *b) { return *(int **)a - *(int **)b; }

void fill_array(int *ptr[], int size) {
    for (int i = 0; i < size; i++)
        *ptr[i] = i;

    qsort(ptr, size, sizeof(int *), cmp);
    
    for (int i = 0; i < size - 1; i++)
        for (int *j = ptr[i] + 1; j < ptr[i + 1]; j++)
            *j = *ptr[i] + *ptr[i + 1];
}