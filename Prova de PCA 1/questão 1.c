#include <stdio.h>
#include <stdlib.h>

// Função para ler um número inteiro positivo
int readNumber() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Número inválido! Digite um número positivo.\n");
        return readNumber();
    }
    return n;
}

// Função para calcular o hiperfatorial de um número
int hiperfactorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
        result = result * result;
    }
    return result;
}

// Função para imprimir o número e seu hiperfatorial
void printResult(int n, int h) {
    printf("O hiperfatorial de %d é %d.\n", n, h);
}

int main() {
    int n = readNumber();
    int h = hiperfactorial(n);
    printResult(n, h);
    return 0;
}
