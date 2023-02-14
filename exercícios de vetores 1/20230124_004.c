#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fatorial(n - 1);
    }
}

void sequenciaFatorial(int sequencia[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        sequencia[i] = fatorial(sequencia[i]);
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
    sequenciaFatorial(sequencia, n);
    printf("A sequencia fatorial e:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sequencia[i]);
    }
    printf("\n");
    return 0;
}
