#include<stdio.h>
#include<stdlib.h>

int main () {

    float massa;
    int seg = 0, min, h;

    printf("Digite a massa do material em gramas: ");
    scanf("%f", &massa);

    while ( massa > 0.5) {

        massa = massa/2;
        seg += 50;
    }

    h = seg/3600;
    min = (seg/60) - (seg/3600) *60;

    printf("Resultado final: %f\n", massa);
    printf("\ntempo decorrido de %d:%d:%d", h, min, seg - h*3600 - min*60);


}
