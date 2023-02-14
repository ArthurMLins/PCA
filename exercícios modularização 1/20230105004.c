#include <stdio.h>

int fat(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Insira um número natural: ");
    scanf("%d", &n);
    printf("O fatorial de %d é %d\n", n, fat(n));
    return 0;
}