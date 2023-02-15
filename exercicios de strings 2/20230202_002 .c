#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 20
#define MAX_NAME_LENGTH 120

void printNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int count) {
    if (count == 0) {
        printf("A lista de nomes está vazia.\n");
        return;
    }

    printf("Lista de nomes:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}

int removeName(char names[MAX_NAMES][MAX_NAME_LENGTH], int count, char name[MAX_NAME_LENGTH]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(names[i], name) == 0) {
            for (int j = i; j < count - 1; j++) {
                strcpy(names[j], names[j + 1]);
            }
            count--;
            return count;
        }
    }
    return count;
}

void sortNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int count) {
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Lista de nomes ordenada:\n");
    printNames(names, count);
}

void insertName(char names[MAX_NAMES][MAX_NAME_LENGTH], int count, char newName[MAX_NAME_LENGTH]) {
    strcpy(names[count], newName);
    count++;
    sortNames(names, count);
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int count = 0;

    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Imprimir a lista de nomes\n");
        printf("2. Remover um nome da lista\n");
        printf("3. Imprimir a lista de nomes em ordem alfabética\n");
        printf("4. Inserir um nome na lista em ordem alfabética\n");
        printf("5. Sair do programa\n");

        int option;
        scanf("%d", &option);

        if (option == 1) {
            printNames(names, count);
        } else if (option == 2) {
            char nameToRemove[MAX_NAME_LENGTH];
            printf("Digite o nome que deseja remover: ");
            scanf(" %[^\n]s", nameToRemove);
            count = removeName(names, count, nameToRemove);
            printNames(names, count);
        } else if (option == 3) {
            sortNames(names, count);
        } else if (option == 4) {
            char newName[MAX_NAME_LENGTH];
            printf("Digite o nome que deseja inserir: ");
            scanf(" %[^\n]s", newName);
            insertName(names, count, newName);
            count++;
        } else if (option == 5) {
            printf("Encerrando o programa...\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
