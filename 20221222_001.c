#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){

    int x;
    float y = 2;

    for(x=1; x<=100; x++){

        x = x - (x-cos(x))/(1 + sin(x));
        printf("Valor de Y%d = %f\n",x,y);
    }
    printf("O valor da raiz é: %f",y);
}

