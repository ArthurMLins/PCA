#include <stdio.h>

int main()
{
    int a,b,area;

    printf("Quanto voce recebe por hora: ");
    scanf("%d", &a);

    printf("Quantas horas voce trabalha por dia: ");
    scanf("%d", &b);


    area = (a*b*365)/12;

    printf("\n""Seu salario mensal: ""%d",area);
    return 0;

}
