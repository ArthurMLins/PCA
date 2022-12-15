#include <stdio.h>

int main()
{
    int a,b,porcentagem;

    printf("Digite o preço da conta: ");
    scanf("%d", &a);

    porcentagem = a*10/100;

    printf("O garçom deverá receber:""%d" ,porcentagem);
    return 0;

}
