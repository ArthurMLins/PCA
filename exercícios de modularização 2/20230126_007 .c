#include <stdio.h>

int main() {
    int n, k, i, j, c, iti, custo_total;

    // Ler tamanho da matriz
    printf("Digite o tamanho da matriz Anxn: ");
    scanf("%d", &n);

    // Declarar matriz de custos
    int custos[n][n];

    // Ler matriz de custos
    printf("Digite os custos de transporte da cidade i para a cidade j:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Custo de transporte de %d para %d: ", i, j);
            scanf("%d", &custos[i][j]);
        }
    }

    // Ler número de itinerários
    printf("Digite o número de itinerários a serem calculados: ");
    scanf("%d", &k);

    // Calcular custo total de cada itinerário
    for (iti=1; iti<=k; iti++) {
        int cidades[iti];
        custo_total = 0;

        // Ler cidades do itinerário
        printf("Digite as %d cidades do itinerário %d:\n", iti, iti);
        for (c=0; c<iti; c++) {
            scanf("%d", &cidades[c]);
        }

        // Calcular custo total do itinerário
        for (c=1; c<iti; c++) {
            custo_total += custos[cidades[c-1]][cidades[c]];
        }

        // Imprimir custo total do itinerário
        printf("Custo total do itinerário %d: %d\n", iti, custo_total);
    }

    return 0;
}
