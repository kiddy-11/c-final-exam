#include <stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int flg = 1;
    if (row != col) {
        flg = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == j || i + j == row - 1) {
                    if (a[i][j] != 1) {
                        flg = 0;
                        break;
                    }
                } else {
                    if (a[i][j] != 0) {
                        flg = 0;
                        break;
                    }
                }
            }
        }
    }
    if (flg == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}