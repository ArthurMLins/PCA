#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, soma;

    printf("\nAdicione 5 números inteiros ( um de cada vez): ");
    scanf("%d" , &soma);
    scanf("%d", &a );
    soma = soma + a;

    for(int i = 0; i <3; i++){

        scanf("%d", &a);

        soma = soma + a;

    }
    printf("A soma e: ""%d", soma);
};

