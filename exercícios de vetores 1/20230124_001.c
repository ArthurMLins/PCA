#include <stdio.h>

void inverter_sequencia(int n, int numeros[]) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
}

int main() {
    int n, i;
    printf("Digite o tamanho da sequência (n): ");
    scanf("%d", &n);
    if (n > 100) {
        printf("ERRO: O tamanho máximo da sequência é 100\n");
        return 1;
    }
    int numeros[n];
    printf("Digite a sequência de números:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("Sequência invertida: ");
    inverter_sequencia(n, numeros);
    return 0;
}
