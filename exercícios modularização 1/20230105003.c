#include <stdio.h>
#include <math.h>

int ler_numero_par();
int verifica_perfeito(int num);

int main() {
    int num = ler_numero_par();
    int resultado = verifica_perfeito(num);

    if (resultado == 1) {
        printf("O número %d é perfeito.\n", num);
    } else {
        printf("O número %d não é perfeito.\n", num);
    }

    return 0;
}

int ler_numero_par() {
    int num;
    do {
        printf("Digite um número par: ");
        scanf("%d", &num);
    } while (num % 2 != 0);

    return num;
}

int verifica_perfeito(int num) {
    int i, soma = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        return 1;
    } else {
        return 0;
    }
}