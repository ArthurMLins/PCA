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

int main() {
    int n, d;
    printf("Digite o número n: ");
    scanf("%d", &n);
    printf("Digite o dígito d: ");
    scanf("%d", &d);
    printf("O dígito %d aparece %d vezes em %d.\n", d, countDigit(n, d), n);
    return 0;
}
