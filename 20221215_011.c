#include <stdio.h>

int main()
{
    int a,b,area,total;

    printf("Quanto voce recebe por hora: ");
    scanf("%d", &a);

    printf("\n""Quantas horas voce trabalha por dia: ");
    scanf("%d", &b);


    area = ((a*b*365)/12);

    total= area-(area*11/100)-(area*8/100)-(area*5/100);

    printf("\n""Quanto voce recebe por mes: ""%d",total);
    return 0;

}
