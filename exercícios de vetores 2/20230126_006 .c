#include <stdio.h>

#define N 3

int main() {
    int matriz[N][N];
    int soma;
    int i, j;
    int soma_linha;

    // Leitura da matriz
    printf("Digite os valores da matriz %dx%d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    soma = 0;
    for (i = 0; i < N; i++) {
        soma += matriz[i][i];
    }

    // Verificação das linhas e colunas
    for (i = 0; i < N; i++) {
        // Soma dos elementos da linha i
        int soma_linha = 0;
        for (j = 0; j < N; j++) {
            soma_linha += matriz[i][j];
        }
        // Verifica se a soma é igual à soma da diagonal principal
        if (soma_linha != soma) {
            printf("Nao eh um quadrado magico.\n");
            return 0;
        }

        // Soma dos elementos da coluna i
        int soma_coluna = 0;
        for (j = 0; j < N; j++) {
            soma_coluna += matriz[j][i];
        }
        // Verifica se a soma é igual à soma da diagonal principal
        if (soma_coluna != soma) {
            printf("Nao eh um quadrado magico.\n");
            return 0;
        }
    }

    // Cálculo da soma da diagonal secundária
    soma = 0;
    for (i = 0; i < N; i++) {
        soma += matriz[i][N-1-i];
    }
    // Verifica se a soma é igual à soma da diagonal principal
    if (soma != soma_linha) {
        printf("Nao eh um quadrado magico.\n");
        return 0;
    }

    // Se chegou até aqui, é um quadrado mágico
    printf("Eh um quadrado magico.\n");
    return 0;
}
