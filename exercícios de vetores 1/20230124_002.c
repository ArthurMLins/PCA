#include <stdio.h>

void imprimirInverso(int sequencia[], int n) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", sequencia[i]);
    }
}

int main() {
    int n, i, sequencia[100];
    printf("Digite o comprimento da sequencia (menor que 100): ");
    scanf("%d", &n);
    printf("Digite os %d numeros da sequencia:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }
    printf("A sequencia na ordem inversa eh: ");
    imprimirInverso(sequencia, n);
    printf("\n");
    return 0;
}
