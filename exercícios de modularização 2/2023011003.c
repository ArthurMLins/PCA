#include <stdio.h>
#include <math.h>

int checkLastDigits(int x, int y) {
    int numOfDigitsInY = (int)log10(y) + 1;
    int lastDigitsOfX = x % (int)pow(10, numOfDigitsInY);
    return lastDigitsOfX == y;
}

int main() {
    int x, y;
    printf("Digite o número x: ");
    scanf("%d", &x);
    printf("Digite o número y: ");
    scanf("%d", &y);
    if (checkLastDigits(x, y)) {
        printf("y corresponde aos últimos dígitos de x.\n");
    } else {
        printf("y não corresponde aos últimos dígitos de x.\n");
    }
    return 0;
}