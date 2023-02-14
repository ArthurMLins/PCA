#include <stdio.h>
#include <stdlib.h>

void lerPesoSemana(float *peso, int *semanas) {
    printf("Digite o peso do feto em gramas: ");
    scanf("%f", peso);
    printf("Digite a quantidade de semanas da gestação: ");
    scanf("%d", semanas);
}

void calcularParto(float peso, int semanas) {
    int meses = semanas / 4;
    if (peso < 100 || semanas < 28) {
        printf("Parto não deverá ser realizado, reavaliar clinicamente");
        exit(0);
    } else if (peso > 2500 && meses > 7) {
        printf("Parto normal");
    } else if (peso > 2500 && meses <= 7) {
        printf("Parto Cesariana");
    } else if (peso >= 2000 && peso <= 1500 && meses > 9) {
        printf("Parto normal");
    } else {
        printf("Parto Cesariana");
    }
}

int main() {
    float peso;
    int semanas;
    lerPesoSemana(&peso, &semanas);
    calcularParto(peso, semanas);
    return 0;
}
