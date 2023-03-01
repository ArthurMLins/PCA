#include <stdio.h>
#include <string.h>

// Definição da estrutura de dados para armazenar as informações dos alunos
typedef struct {
    char nome[50];
    char sexo;
    float nota;
} Aluno;

void acrescentar_ponto(float notas[1][6], int num_alunas) {
    for (int i = 0; i < num_alunas; i++) {
        for (int j = 0; j < num_alunas; j++) {
            notas[i][j] += (float)1.0;
        }
    }

}



int main() {
    // Inicialização das matrizes de dados
    char nomes[2][6][50] = {
            {"Joao",    "Maria", "Pedro", "Ana",   "Paulo",   "Luiza"},
            {"Mariana", "Lucas", "Carla", "Julia", "Gabriel", "Fernanda"}
    };

    char sexos[2][6] = {
            {'M', 'F', 'M', 'F', 'M', 'F'},
            {'F', 'M', 'F', 'F', 'M', 'F'}
    };

    float notas[2][6] = {
            {7.5, 8.0, 9.0, 6.5, 7.0, 8.5},
            {8.5, 7.0, 7.5, 9.0, 6.0, 8.0}
    };

    int equipe_1_mulheres = 0, equipe_2_mulheres = 0;

// Percorre a matriz de sexos contando a quantidade de mulheres em cada equipe
    for (int i = 0; i < 6; i++) {
        if (sexos[0][i] == 'F') {
            equipe_1_mulheres++;
        }
        if (sexos[1][i] == 'F') {
            equipe_2_mulheres++;
        }
    }

    if (equipe_1_mulheres > equipe_2_mulheres) {
        printf("A equipe 1 tem mais mulheres.\n");
    } else if (equipe_2_mulheres > equipe_1_mulheres) {
        printf("A equipe 2 tem mais mulheres.\n");
    } else {
        printf("As duas equipes têm a mesma quantidade de mulheres.\n");
    }
// Declaração da estrutura de dados para armazenar as informações das alunas aprovadas
    typedef struct {
        char nome[50];
    } AlunaAprovada;

    AlunaAprovada alunas_aprovadas[12];
    int num_alunas_aprovadas = 0;

// Percorre a matriz de alunos verificando se atendem às condições
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            if (sexos[i][j] == 'F' && notas[i][j] >= 8.0) {
                strcpy(alunas_aprovadas[num_alunas_aprovadas].nome, nomes[i][j]);
                num_alunas_aprovadas++;
            }
        }
    }
    printf("Alunas aprovadas:\n");
    for (int i = 0; i < num_alunas_aprovadas; i++) {
        printf("%s\n", alunas_aprovadas[i].nome);
    }

    acrescentar_ponto(notas[1], 6);

}
