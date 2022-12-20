#include <stdio.h>

int main()
{
    int a,b,c,d,media;

    printf("Digite a primeira nota: ");
    scanf("%d", &a);

    printf("\n""Digite um número: ");
    scanf("%d", &b);

    printf("\n""Digite um número: ");
    scanf("%d", &c);

    printf("\n""Digite um número: ");
    scanf("%d", &d);

    media = (a+b+c+d)/4;

    printf("\n""A sua media: ""%d",media);
    return 0;

}
