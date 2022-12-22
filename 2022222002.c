#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, soma;

    printf("\nAdicione 50 números inteiros ( um de cada vez): ");
    scanf("%d" , &soma);
    scanf("%d", &a );

    if(soma%2 != 0){

        soma = soma + a;
    }
    for(int i = 0; i <48; i++){

        scanf("%d", &a);

        if(soma%2 != 0) {
            soma = soma + a;
        }
    }
    printf("A soma dos números impares é: ""%d", soma);
};

