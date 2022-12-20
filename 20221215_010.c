#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, area;

    printf("Qual a sua altura: ");
    scanf("%f", &a);

    area =  (72.7*a) - 58;

    printf("\n""Seu Peso ideal: ""%2.f",area);

    return 0;

}
