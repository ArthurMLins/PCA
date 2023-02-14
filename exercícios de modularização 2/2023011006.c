#include <stdio.h>

void decimalToBinary(int decimal) {
    int resto, i = 1, binary = 0;
    while (decimal != 0) {
        resto = decimal % 2;
        decimal /= 2;
        binary += resto * i;
        i *= 10;
    }
    printf("O número decimal %d em binário é: %d\n", decimal, binary);
}

int main() {
    int decimal;
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}




