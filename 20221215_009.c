#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b;
    float c,calculo1, calculo2, calculo3;

    printf("\n""Valor a: ");
    scanf("%i", &a);

    printf("\n""Valor de b: ");
    scanf("%i", &b);

    printf("\n""Valor de c: ");
    scanf("%f", &c);

    calculo1 = (2*a)*(b/2);

    calculo2 = (3*a) + c;

    calculo3 = c*c*c;

    printf("\n""Primeiro calculo: ""%.2f",calculo1);
    printf("\n""Segundo calculo: ""%.2f",calculo2);
    printf("\n""Terceiro calculo: ""%.2f",calculo3);


    return 0;

}

