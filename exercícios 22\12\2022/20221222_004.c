#include<stdio.h>
#include <conio.h>

int main() {

    int num, contador = 0;

    printf("Entre com um número inteiro: \n");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)

        if (num%i == 0)

            contador++;


    if (contador == 2)
        printf("O número %i é primo\n", num);
    else
        printf("O número %i não é primo\n", num);

    getch();
    return 0;

}
