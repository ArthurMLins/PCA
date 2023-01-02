#include <stdio.h>

#define TAM 15
int main() {
    int vet[TAM], i, maior, menor;

    for ( i = 0; i < TAM; i++) {

        scanf("%i", &vet[i]);
    }
    maior = vet[0];
    for ( i = 1; i < TAM; i++) {
        if (vet[i] > maior) {

            maior = vet[i];
        }
    }
    menor = vet[0];
    for (i = 0; i < TAM; i++){
        if ( vet[i] < menor) {

            menor = vet[i];
        }
    }


    printf("\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);

    return 0;
}
