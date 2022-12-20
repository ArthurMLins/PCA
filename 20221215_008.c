#include <stdio.h>

int main()
{
    int a,area;

    printf("Qual a temperatuta em Celsius: ");
    scanf("%d", &a);

    area = (9*a+32*5)/5;

    printf("\n""Temperatura em Farenheit: ""%d",area);

    return 0;

}
