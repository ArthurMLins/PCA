#include <stdio.h>
#include <string.h>

#define MAX_CARROS 5
#define MAX_MODELO 20

int main() {
    char modelos[MAX_CARROS][MAX_MODELO];
    float consumo[MAX_CARROS];

    // Leitura dos modelos e consumo
    for (int i = 0; i < MAX_CARROS; i++) {
        printf("Modelo do carro %d: ", i+1);
        fgets(modelos[i], MAX_MODELO, stdin);

        printf("Consumo do carro %d (km/l): ", i+1);
        scanf("%f", &consumo[i]);
        getchar(); // Limpa o buffer do teclado
    }

    // Encontra o modelo mais econômico
    int index_mais_economico = 0;
    for (int i = 1; i < MAX_CARROS; i++) {
        if (consumo[i] > consumo[index_mais_economico]) {
            index_mais_economico = i;
        }
    }

    // Imprime o modelo mais econômico
    printf("\nModelo mais econômico: %s", modelos[index_mais_economico]);

    // Cálculo do consumo para percorrer 1000 km
    float consumo_1000[MAX_CARROS];
    for (int i = 0; i < MAX_CARROS; i++) {
        consumo_1000[i] = 1000 / consumo[i];
    }

    // Imprime o consumo para percorrer 1000 km de cada carro
    printf("\nConsumo para percorrer 1000 km:");
    for (int i = 0; i < MAX_CARROS; i++) {
        printf("\n%s: %.2f litros", modelos[i], consumo_1000[i]);
    }

    return 0;
}
