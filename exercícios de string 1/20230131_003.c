#include <stdio.h>
#include <ctype.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    // Verifica se as barras estão no lugar certo
    if (data[2] != '/' || data[5] != '/') {
        printf("Data inválida.\n");
        return 1;
    }

    // Verifica se DD, MM e AAAA são numéricos
    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) continue; // Ignora as barras
        if (!isdigit(data[i])) {
            printf("Data inválida.\n");
            return 1;
        }
    }

    // Copia o dia, mês e ano para as variáveis inteiras
    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Data inválida.\n");
        return 1;
    }

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
