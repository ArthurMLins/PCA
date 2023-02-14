#include <stdio.h>

int produtoEscalar(int x[], int y[], int n) {
    int i, produto = 0;
    for (i = 0; i < n; i++) {
        produto += x[i] * y[i];
    }
    return produto;
}

int main() {
    int n, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int x[n], y[n];
    printf("Digite os elementos do vetor x:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }

    printf("Digite os elementos do vetor y:\n");
    for (i = 0; i < n; i++) {
        printf("y[%d] = ", i);
        scanf("%d", &y[i]);
    }

    int produto = produtoEscalar(x, y, n);
    printf("O produto escalar de x e y é %d\n", produto);

    return 0;
}
