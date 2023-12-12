#include <math.h>
#include <stdio.h>

int main() {
    int arr[101];
    int length = 0;
    while (scanf("%d", &arr[length]) != EOF) {
        length++;
    }

    int begin[101] = {}, end[101] = {};
    for (int mid = 0; mid < length; mid++) {
        int front = mid, back = mid;
        while (front >= 0 && back < length && arr[front] == arr[back]) {
            int current_length = back - front + 1;
            if (current_length > begin[front]) {
                begin[front] = current_length;
            }
            if (current_length > end[back]) {
                end[back] = current_length;
            }
            front--, back++;
        }
        front = mid, back = mid + 1;
        while (front >= 0 && back < length && arr[front] == arr[back]) {
            int current_length = back - front + 1;
            if (current_length > begin[front]) {
                begin[front] = current_length;
            }
            if (current_length > end[back]) {
                end[back] = current_length;
            }
            front--, back++;
        }
    }
    int max_length = 0, max_start = -1;
    for (int i = 0; i + 1 < length; i++) {
        int current_length = end[i] + begin[i + 1], current_start = i - end[i] + 1;
        if (current_length > max_length) {
            max_length = current_length;
            max_start = current_start;
        }
        else if (current_length == max_length && max_start < current_start) {
            max_start = current_start;
        }
    }
    for (int i = 0; i < max_length; i++) {
        printf("%d", arr[max_start + i]);
        if (i != max_length - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}