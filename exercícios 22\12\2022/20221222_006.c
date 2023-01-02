#include<stdio.h>
#include<stdlib.h>

int main() {

    int soma=0,dobro,n,i;

    printf("Digite um número:\n");
    scanf("%d",&n);

    dobro=2*n;

    for (i=1;i<=n;i++) {

        if(n % i == 0) {

            soma=soma+i;
        }
    }
    if(soma==dobro)
        printf("%d é um número perfeito ",n);
    else
        printf ("%d não é um número perfeito",n);
    return 0;
}

