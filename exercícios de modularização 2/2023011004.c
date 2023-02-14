#include <stdio.h>
#include <string.h>

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

int isSegment(int x, int y) {
    int x_len = 0, y_len = 0;
    int x_temp = x, y_temp = y;
    while (x_temp > 0) {
        x_len++;
        x_temp /= 10;
    }
    while (y_temp > 0) {
        y_len++;
        y_temp /= 10;
    }
    if (y_len < x_len) {
        return 0;
    }
    int y_last_x_digits = y % (int)pow(10, x_len);
    if (x == y_last_x_digits) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y;
    printf("Digite o número x: ");
    scanf("%d", &x);
    printf("Digite o número y: ");
    scanf("%d", &y);
    if (isSegment(x, y)) {
        printf("%d é um segmento de %d.\n", x, y);
    } else {
        printf("%d não é um segmento de %d.\n", x, y);
    }
    return 0;
}
