#include <stdio.h>

int main() {
    int matriz[3][3];
    int k;
    int i, j;

    // Lendo a matriz e o valor de k
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    // Multiplicando a matriz por k
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= k;
        }
    }

    // Imprimindo a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
