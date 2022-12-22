#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Adicione 20 números inteiros, não negativos( um de cada vez):\n");
    scanf("%d", &b);
    scanf("%d", &a);

        if(a<b){

            c = a;
            a = b;
            b = c;
        }

    for(int i = 0; i <18; i++){

        if(a<0) {

                scanf("%d", &a);

        }

        else{

            if(b<0){

                scanf("%d", &b);
            }
            else{

                scanf("%d", &c);
            }
        }
        if(c>=0) {

            if(c > a){

                a = c;
            }
            else{

                if(c < b){

                    b = c;
                }
            }
        }
    }
    if (a>=0 && b>=0){

        printf("O maior número foi: ""%d", a);
        printf("\n""O menor número foi: ""%d", b);
    }
    else{
        printf("Faltam valors positivos para fazer");
        printf("\n""as compareações");

    }

};

