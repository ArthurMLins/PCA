#include<stdio.h>

int main() {
    int mat[5][5];
    int diag_prin = 0, diag_sec = 0, soma_linha4 = 0, soma_coluna2 = 0;

    // Ler matriz
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);

            // Calcular soma da linha 4 e coluna 2
            if (i == 3) {
                soma_linha4 += mat[i][j];
            }
            if (j == 1) {
                soma_coluna2 += mat[i][j];
            }

            // Calcular diagonal principal e secundária
            if (i == j) {
                diag_prin += mat[i][j];
            }
            if (i + j == 4) {
                diag_sec += mat[i][j];
            }
        }
    }

    // Imprimir diagonal principal
    printf("Diagonal principal: ");
    for (int i=0; i<5; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    // Imprimir diagonal secundária
    printf("Diagonal secundária: ");
    for (int i=0; i<5; i++) {
        printf("%d ", mat[i][4-i]);
    }
    printf("\n");

    // Imprimir soma da linha 4 e coluna 2
    printf("Soma da linha 4: %d\n", soma_linha4);
    printf("Soma da coluna 2: %d\n", soma_coluna2);

    // Imprimir todos os elementos, exceto a diagonal principal
    printf("Matriz, exceto diagonal principal: \n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (i == j) {
                printf("  ");
            } else {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
