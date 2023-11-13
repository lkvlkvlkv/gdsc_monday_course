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
 
void fill_array(int *ptr[], int n) {
    int length = ptr[n - 1] - ptr[0] + 1;
    int position[length], front = 0;
    int i = 0;
    while (i < length) {
        *(ptr[0] + i) = 0;
        i++;
    }
    i = 0;
    while (i < n) {
        *ptr[i] = i;
        i++;
    }
    i = 0;
    while (i < length) {
        if (*(ptr[0] + i) != 0) {
            front = *(ptr[0] + i);
            position[i] = 0;
        }
        if (*(ptr[0] + i) == 0) {
            *(ptr[0] + i) += front;
            position[i] = 1;
        }
        i++;
    }
    i = length - 1;
    while (i > 0) {
        if (position[i] == 0)
            front = *(ptr[0] + i);
        if (position[i] == 1)
            *(ptr[0] + i) += front;
        i--;
    }
}