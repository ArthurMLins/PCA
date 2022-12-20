#include <stdio.h>

int main()
{
    int a,area;

    printf("Qual a temperatuta em Farenheit: ");
    scanf("%d", &a);

    area = (5 * (a-32) / 9);

    printf("\n""Temperatura em Celsius: ""%d",area);

    return 0;

}
