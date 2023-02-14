#include <stdio.h>

int main() {
    int matriz[3][3];
    int x;
    int i, j;
    int encontrado = 0;

    // leitura da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // leitura do valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &x);

    // busca do valor na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == x) {
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", x, i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (!encontrado) {
        printf("O valor %d nao foi encontrado na matriz.\n", x);
    }

    return 0;
}
