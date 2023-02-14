#include <stdio.h>

int main() {
    int n, i, face;
    int count[6] = {0, 0, 0, 0, 0, 0}; // inicializa todos os contadores para zero

    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o resultado do lançamento %d: ", i + 1);
        scanf("%d", &face);
        count[face - 1]++; // incrementa o contador da face correspondente
    }

    printf("Número de ocorrências de cada face:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d\n", i + 1, count[i]);
    }

    return 0;
}
