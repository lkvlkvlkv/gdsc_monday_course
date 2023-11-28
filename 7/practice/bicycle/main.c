#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int distance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int n;
    scanf("%d", &n);
    int p_x[n], p_y[n], p_c[n];
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &p_x[i], &p_y[i], &p_c[i]);
    }
    int m;
    scanf("%d", &m);
    int b_x[m], b_y[m];
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &b_x[i], &b_y[i]);
    }
    int p_b[n];
    memset(p_b, 0, sizeof(p_b));
    for (int i = 0; i < m; i++) {
        int dist = 100000, res = -1;
        for (int j = 0; j < n; j++) {
            if (p_b[j] == p_c[j]) continue;
            int d = distance(b_x[i], b_y[i], p_x[j], p_y[j]);
            if (d < dist) {
                dist = d;
                res = j;
            }
            else if (d == dist) {
                if (p_x[j] < p_x[res]) {
                    res = j;
                }
                else if (p_x[j] == p_x[res] && p_y[j] < p_y[res]) {
                    res = j;
                }
            }
        }
        p_b[res]++;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", p_b[i]);
    }
    return 0;
}