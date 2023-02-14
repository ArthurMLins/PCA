#include <stdio.h>
#include <math.h>

int scanIntIntervalo(int min, int max) {
    int num;
    do {
        printf("Digite um número inteiro entre %d e %d: ", min, max);
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}

double percentual(int valor, int total) {
    return 100.0 * valor / total;
}

double absdif(double a, double b) {
    return fabs(a - b);
}

int main() {
    int x = scanIntIntervalo(0, 1000);
    int y = scanIntIntervalo(0, 1000);
    int maior = x > y ? x : y;
    int menor = x < y ? x : y;
    double p = percentual(menor, maior);
    double d = absdif(maior, menor);
    printf("Percentual do menor em relação ao maior: %.2f%%\n", p);
    printf("Módulo da diferença entre o maior e o menor: %.2f\n", d);
    return 0;
}
