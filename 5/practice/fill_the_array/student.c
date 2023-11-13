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
    int *arr = ptr[0];
    int arrSize = ptr[n - 1] - ptr[0] + 1;
    for(int i = 0; i < arrSize; i++ ) {
        arr[i] = -1;
    }
    for(int i = 0; i < n; i++ ) {
        *ptr[i] = i;
    }
    for(int i = 0; i < arrSize; i++ ) {
        if(arr[i] == -1) {
            //find left
            int left = 0;
            for(int j = i - 1; j >= 0; j-- ) {
                if(arr[j] != -1) {
                    left = j;
                    break;
                }
            }
            //find right
            int right = 0;
            for(int j = i + 1; j < arrSize; j++ ) {
                if(arr[j] != -1) {
                    right = j;
                    break;
                }
            }
            for(int j = left + 1; j < right; j++ ) {
                arr[j] = arr[left] + arr[right];
            }
            i = right;
        }
    }
}