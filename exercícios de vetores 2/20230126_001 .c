#include <stdio.h>

int main() {
    int mat1[3][5] = {
            {2, 4, 6, 8, 10},
            {1, 3, 5, 7, 9},
            {0, 2, 4, 6, 8}
    };
    int mat2[3][5] = {
            {10, 8, 6, 4, 2},
            {9, 7, 5, 3, 1},
            {8, 6, 4, 2, 0}
    };
    int matSoma[3][5] = {0};
    int i, j;

    // soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matSoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // impressão da matriz soma
    printf("Matriz soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
