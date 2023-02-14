#include <stdio.h>

int obterPares(int sequencia[], int n, int pares[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (sequencia[i] % 2 == 0) {
            pares[j] = sequencia[i];
            j++;
        }
    }
    return j;
}

int main() {
    int n, i, n_pares, sequencia[100], pares[100];
    printf("Digite o comprimento da sequencia (menor que 100): ");
    scanf("%d", &n);
    printf("Digite os %d numeros da sequencia:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }
    n_pares = obterPares(sequencia, n, pares);
    printf("A sequencia contem %d numeros pares:\n", n_pares);
    for (i = 0; i < n_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    return 0;
}
