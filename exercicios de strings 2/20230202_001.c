#include <stdio.h>
#include <string.h>

#define NUM_EQUIPES 5
#define NUM_ALUNOS 4
#define TAM_NOME 50

int main() {
    char equipes[NUM_EQUIPES][NUM_ALUNOS][TAM_NOME];
    char nome[TAM_NOME];
    int i, j, equipe = -1;

    // Preencher a matriz com os nomes dos alunos
    printf("Digite os nomes dos alunos de cada equipe:\n");
    for (i = 0; i < NUM_EQUIPES; i++) {
        printf("Equipe %d:\n", i+1);
        for (j = 0; j < NUM_ALUNOS; j++) {
            printf("  Aluno %d: ", j+1);
            scanf("%s", equipes[i][j]);
        }
    }

    // Procurar o nome do aluno na matriz
    printf("\nDigite o nome do aluno: ");
    scanf("%s", nome);
    for (i = 0; i < NUM_EQUIPES; i++) {
        for (j = 0; j < NUM_ALUNOS; j++) {
            if (strcmp(nome, equipes[i][j]) == 0) {
                equipe = i+1;
                break;
            }
        }
        if (equipe != -1) {
            break;
        }
    }

    // Imprimir a equipe do aluno encontrado
    if (equipe != -1) {
        printf("\n%s está na equipe %d.\n", nome, equipe);
    } else {
        printf("\n%s não foi encontrado.\n", nome);
    }

    return 0;
}
