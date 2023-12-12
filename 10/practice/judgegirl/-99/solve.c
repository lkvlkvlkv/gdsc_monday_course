#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    char name[10][66];
    int row[10][256 * 256], column[10][256 * 256];
    int row_count[10][256] = {}, column_count[10][256] = {};
    int incline_count[10][2] = {};
    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < m; c++) {
                int number;
                scanf("%d", &number);
                row[i][number - 1] = r;
                column[i][number - 1] = c;
            }
        }
    }
    bool win[10] = {};
    for (int i = 0; i < m * m; i++) {
        int current_number;
        scanf("%d", &current_number);
        bool has_winner = false;
        int winner_count = 0;
        for (int j = 0; j < n; j++) {
            int r = row[j][current_number - 1], c = column[j][current_number - 1];
            row_count[j][r]++, column_count[j][c]++;
            if (r - c == 0) {
                incline_count[j][0]++;
            }
            if (r + c == m - 1) {
                incline_count[j][1]++;
            }
            if (row_count[j][r] == m || column_count[j][c] == m || incline_count[j][0] == m || incline_count[j][1] == m) {
                has_winner = true;
                win[j] = true;
                winner_count++;
            }
        }
        if (has_winner) {
            printf("%d ", current_number);
            for (int j = 0; j < n; j++) {
                if (win[j]) {
                    printf("%s", name[j]);
                    winner_count--;
                    if (winner_count != 0) {
                        printf(" ");
                    }
                }
            }
            printf("\n");
            break;
        }
    }
    return 0;
}