#include <stdio.h>

void soma_matrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n = 3, m = 5;
    int A[n][m];
    int B[n][m];
    int C[n][m];

    // preenche as matrizes A e B com valores quaisquer
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = i + j;
            B[i][j] = i * j;
        }
    }

    soma_matrizes(n, m, A, B, C);

    // imprime a matriz resultante C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
