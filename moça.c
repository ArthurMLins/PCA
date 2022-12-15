#include <stdio.h>


int main(void)
{
    char a[20],b[20],d[20];

    printf("Digite seu nome: \n");
    scanf("%s", &a);

    printf("Digite seu sexo (masculino ou feminino): \n");
    scanf("%s", &b);

    printf("Digite sua idade: \n");
    scanf("%s", &d);

    printf("Seu nome: ""%s" ,a );
    printf("\n");
    printf("Seu sexo: ""%s" ,b);
    printf("\n");
    printf("Sua idade: ""%s" ,d);
    printf("\n");

    if (*b == *"masculino") {
        printf("nao e mulher""\n");

    }



    else {
        printf("e mulher""\n");

    }

    return 0;

}
