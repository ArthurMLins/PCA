#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;

    printf("\nAdicione 50 números inteiros ( um de cada vez): ");
    printf("\nApenas serão somados os números impares entre 100 e 200.");

    scanf("%d" , &b);
    scanf("%d", &a );

    if(b%2 != 0) {

        if (a >= 100 && a <= 200 && b >= 100 && b <= 200) {

            b = b + a;

        }
    }
    for(int i = 0; i <48; i++){

        scanf("%d", &a);

        if(b%2 != 0) {

            if(b>=100 && b <=200){

                b = b + a;
            }
        }
    }
    printf("A soma dos números impares é: ""%d", b);
};

