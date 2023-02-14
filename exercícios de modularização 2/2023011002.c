#include <stdio.h>

int countDigit(int n, int d) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == d) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int isPermutation(int a, int b) {
    for (int i = 0; i <= 9; i++) {
        if (countDigit(a, i) != countDigit(b, i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    if (isPermutation(a, b)) {
        printf("%d é uma permutação de %d.\n", a, b);
    } else {
        printf("%d não é uma permutação de %d.\n", a, b);
    }
    return 0;
}