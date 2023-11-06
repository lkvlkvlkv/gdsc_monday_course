// #include "Capture.h"

#include <stdbool.h>
#include <stdio.h>

// whether level_a can eat level_b
bool can_eat(int level_a, int level_b) {
    if (level_a == 7 && level_b == 0) {
        return false;
    }
    if (level_a == 0 && level_b == 7) {
        return true;
    }
     // no body can eat zero
    if (level_b == 0) {
        return false;
    }
    return level_a >= level_b;
}

// iterate direction
int dir[5] = {0, -1, 0, 1, 0};

void CaptureOppPieces(int board[4][4], int turn) {
    // store result
    int v[32][2] = {}, idx = 0;
    for (int i_a = 0; i_a < 4; i_a++) {
        for (int j_a = 0; j_a < 4; j_a++) {
            // get our i_a j_a
            if (board[i_a][j_a] == -1) continue;
            if (board[i_a][j_a] % 2 != turn) continue;
            for (int d = 0; d < 4; d++) {
                // get opponent i_b j_b
                int i_b = i_a + dir[d], j_b = j_a + dir[d + 1];
                if (i_b < 0 || j_b < 0 || i_b == 4 || j_b == 4) continue;
                if (board[i_b][j_b] == -1) continue;
                if (board[i_b][j_b] % 2 == turn) continue;
                // get level
                int lv_a = board[i_a][j_a] / 2, lv_b = board[i_b][j_b] / 2;
                // whether our can eat opponent
                if (can_eat(lv_a, lv_b)) {
                    v[idx][0] = board[i_b][j_b], v[idx][1] = board[i_a][j_a];
                    idx++;
                }
            }
        }
    }
    // sort result
    for (int i = 0; i < idx; i++) {
        for (int j = i + 1; j < idx; j++) {
            if (v[i][0] < v[j][0]) {
                int temp;
                temp = v[i][0], v[i][0] = v[j][0], v[j][0] = temp;
                temp = v[i][1], v[i][1] = v[j][1], v[j][1] = temp;
            }
            else if (v[i][0] == v[j][0] && v[i][1] < v[j][1]) {
                int temp;
                temp = v[i][0], v[i][0] = v[j][0], v[j][0] = temp;
                temp = v[i][1], v[i][1] = v[j][1], v[j][1] = temp;
            }
        }
    }
    // print result
    for (int i = 0; i < idx; i++) {
        printf("%d is captured by %d\n", v[i][0], v[i][1]);
    }
}