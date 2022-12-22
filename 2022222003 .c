#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Adicione 20 números inteiros ( um de cada vez):\n");
    scanf("%d", &c);

    a = c;
    b = c;

    for(int i = 0; i <19; i++){

        scanf("%d", &c);

        if(c>a) {
            a=c;
        }
        if(c<b) {
            b=c;
        }
    }
    printf("O maior número foi: ""%d", a);
    printf("\n""O menor número foi: ""%d", b);
};
