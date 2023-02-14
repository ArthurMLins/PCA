#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inverte_string(char *palavra) {
    int tamanho = strlen(palavra);
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}

void remove_vogais(char *string) {
    int tamanho = strlen(string);
    for (int i = 0; i < tamanho; i++) {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U') {
            printf("%c", string[i]);
        }
    }
}

void converte_para_maiusculas(char *string) {
    int tamanho = strlen(string);
    for (int i = 0; i < tamanho; i++) {
        string[i] = toupper(string[i]);
    }
}

int conta_caractere(char *string, char caractere) {
    int tamanho = strlen(string);
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (string[i] == caractere) {
            contador++;
        }
    }
    return contador;
}

void remove_caractere(char *string, char caractere) {
    int tamanho = strlen(string);
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (string[i] != caractere) {
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
}

int main() {
    char palavra[100];
    char string[100];
    char caractere;

    // Teste função inverte_string
    printf("Digite uma palavra para inverter: ");
    scanf("%s", palavra);
    printf("Palavra invertida: ");
    inverte_string(palavra);
    printf("\n");

    // Teste função remove_vogais
    printf("Digite uma string para remover vogais: ");
    scanf(" %[^\n]", string);
    printf("String sem vogais: ");
    remove_vogais(string);
    printf("\n");

    // Teste função converte_para_maiusculas
    printf("Digite uma string para converter para maiusculas: ");
    scanf(" %[^\n]", string);
    converte_para_maiusculas(string);
    printf("String em maiusculas: %s\n", string);

    // Teste função conta_caractere
    printf("Digite uma string e um caractere para contar: ");
    scanf(" %[^\n] %c", string, &caractere);
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, conta_caractere(string, caractere));

    // Teste função remove_caractere
    printf("Digite uma string e um caractere para remover: ");
    scanf(" %[^\n] %c", string, &caractere);
    remove_caractere(string, caractere);
    printf("String sem o caractere '%c': %s\n", caractere, string);

    return 0;
}
