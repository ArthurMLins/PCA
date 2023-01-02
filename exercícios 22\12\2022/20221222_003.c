#include<stdio.h>
#include<stdlib.h>

int main () {

    int numero, soma_par = 0, soma_impar = 0;

    do {

        printf("Digite um número inteiro: \n");
        scanf("%i", &numero);
        if ( numero < 0||numero > 1000){break;}
        if ( numero%2 == 0){

            soma_par += numero;

        }else {
            soma_impar += numero;
        }

    }while(numero >= 0);

    printf("A soma dos números ímpares é: %i \n", soma_impar);
    printf("A soma dos números pares é: %i \n", soma_par);


    return 0;
}
