#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, flag = 1;

    printf("Digite uma string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("%s é um palíndromo.\n", str);
    } else {
        printf("%s não é um palíndromo.\n", str);
    }

    return 0;
}
