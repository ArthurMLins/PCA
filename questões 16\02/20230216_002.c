#include <stdio.h>
#include <stdlib.h>

#define MAX_CONJ_SIZE 100
#define MAX_NUM_CONJ 100

void interseccao(int *conjA, int *conjB, int *conjC) {
    int i, j, k;
    k = 1;
    for (i = 1; i <= conjA[0]; i++) {
        for (j = 1; j <= conjB[0]; j++) {
            if (conjA[i] == conjB[j]) {
                conjC[k] = conjA[i];
                k++;
                break;
            }
        }
    }
    conjC[0] = k - 1;
}

int main() {
    int numConj, i, j;
    int interseccaoAtual[MAX_CONJ_SIZE+1];
    int interseccaoFinal[MAX_CONJ_SIZE+1];

    // Lendo o número de conjuntos
    scanf("%d", &numConj);

    // Lendo o primeiro conjunto
    scanf("%d", &interseccaoFinal[0]);
    for (i = 1; i <= interseccaoFinal[0]; i++) {
        scanf("%d", &interseccaoFinal[i]);
    }

    // Lendo os demais conjuntos e calculando a intersecção
    for (i = 1; i < numConj; i++) {
        scanf("%d", &interseccaoAtual[0]);
        for (j = 1; j <= interseccaoAtual[0]; j++) {
            scanf("%d", &interseccaoAtual[j]);
        }
        interseccao(interseccaoFinal, interseccaoAtual, interseccaoFinal);
    }

    // Imprimindo a intersecção final
    printf("%d\n", interseccaoFinal[0]);
    for (i = 1; i <= interseccaoFinal[0]; i++) {
        printf("%d ", interseccaoFinal[i]);
    }
    printf("\n");

    return 0;
}
