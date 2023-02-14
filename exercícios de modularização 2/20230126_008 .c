#include <stdio.h>
#include <stdbool.h>

bool multiplicar_matrizes(int A[][100], int m, int n, int B[][100], int p, int q, int C[][100], int *r, int *s) {
    if (n != p) {
        return false; // não é possível multiplicar as matrizes
    }

    // realizar a multiplicação das matrizes
    for (int i=0; i<m; i++) {
        for (int j=0; j<q; j++) {
            int soma = 0;
            for (int k=0; k<n; k++) {
                soma += A[i][k] * B[k][j];
            }
            C[i][j] = soma;
        }
    }

    *r = m; // atualiza a linha da matriz C
    *s = q; // atualiza a coluna da matriz C
    return true;
}
int main() {
    int A[100][100], B[100][100], C[100][100];
    int m, n, p, q, r, s;

    printf("Digite a dimensão da matriz A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Digite a dimensão da matriz B (p x q): ");
    scanf("%d %d", &p, &q);

    printf("Digite os elementos da matriz A:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i=0; i<p; i++) {
        for (int j=0; j<q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    if (multiplicar_matrizes(A, m, n, B, p, q, C, &r, &s)) {
        printf("A x B =\n");
        for (int i=0; i<r; i++) {
            for (int j=0; j<s; j++) {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Não é possível multiplicar as matrizes.\n");
    }

    return 0;
}
