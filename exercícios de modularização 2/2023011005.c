#include <stdio.h>
#include <math.h>

int binToDec(int bin) {
    int decimal = 0, i = 0, remainder;
    while (bin != 0) {
        remainder = bin % 10;
        bin = bin / 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int main() {
    int bin;
    printf("Digite um número binário: ");
    scanf("%d", &bin);
    int decimal = binToDec(bin);
    printf("O número binário %d em decimal é %d\n", bin, decimal);
    return 0;
}