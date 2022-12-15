#include <stdio.h>

int main()
{
    int a,b,area;

    printf("Digite a base: ");
    scanf("%d", &a);

    printf("Digite a altura: ");
    scanf("%d", &b);

    area = (a*b)/2;

    printf("%d" ,area);
    return 0;

}
