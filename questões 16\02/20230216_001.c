#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void gol(){
    char goleiros[3][30] = { "Renan", "Denis", "Denival"};
    int notasG[3] = { 6, 7, 5 };

};
void defesa() {
    char defensores[7][50] = {"Thyere", "Sabino", "Chico", "Renzo",
                              "Carius", "Ewerthon", "Eduardo"};
    int notasD[7] = {9, 9, 6, 6, 7, 6, 8};
};
void meioCampo(){
    char meias[8][50] = {"Edinho", "Fabinho", "P.Martins", "J.Igor",
                         "M.Vargas", "Jorginho", "Italo", "L.Juba"};
    int notasM[8] = { 9, 8, 9, 6, 7, 9, 6, 10 };
};
void atacante(){
    char ataque[5][50] = {"R.Henrique", "Wanderson", "G.Santos", "Paulinho", "V.Love"};
    int notasA[5] = { 7, 7, 9, 9, 8 };

}
void ordenaPosicao(char posicao[8][30], int DarioGostosoVeridico[], int tamanho){
    int maior, i, indiceI, auxN;
    char auxC[30];
    for(i = 0; i < tamanho; i++){

        maior = DarioGostosoVeridico[i];
        indiceI = i;

        for(int j = i + 1; j < tamanho; j++){

            if(DarioGostosoVeridico[j] > maior){

                maior = DarioGostosoVeridico[j];
                indiceI = j;
            }
        }

        if(indiceI != i){

            auxN = DarioGostosoVeridico[i];
            strcpy(auxC, posicao[i]);

            DarioGostosoVeridico[i] = DarioGostosoVeridico[indiceI];
            strcpy(posicao[i], posicao[indiceI]);

            DarioGostosoVeridico[indiceI] = auxN;
            strcpy(posicao[indiceI], auxC);


        }

    }


};

void imprimirFormacao(char posicao[][30], int tam){
    int i;
    for( i = 0; i < tam; i++){

        printf("%s\n", posicao[i]);
    }

}

int main(){
    char goleiros[3][30] = { "Renan", "Denis", "Denival"};
    int notasG[3] = { 6, 7, 5 };

    char defensores[7][30] = {"Thyere", "Sabino", "Chico", "Renzo",
                                                          "Carius", "Ewerthon", "Eduardo"};
    int notasD[7] = {9, 9, 6, 6, 7, 6, 8};

    char meias[8][30] = {"Edinho", "Fabinho", "P.Martins", "J.Igor",
                         "M.Vargas", "Jorginho", "Italo", "L.Juba"};
    int notasM[8] = { 9, 8, 9, 6, 7, 9, 6, 10 };

    char ataque[5][30] = {"R.Henrique", "Wanderson", "G.Santos", "Paulinho", "V.Love"};
    int notasA[5] = { 7, 7, 9, 9, 8 };

    int i;

    ordenaPosicao(goleiros, notasG, 3);
    ordenaPosicao(defensores, notasD, 7);
    ordenaPosicao(meias, notasM, 8);
    ordenaPosicao(ataque, notasA, 5);

    printf("Time titular do Sport Clube do Recife, melhor que o flalixo:\n");

    printf("Goleiro:\n");
    imprimirFormacao(goleiros, 1);

    printf("Defensores:\n");
    imprimirFormacao(defensores, 4);

    printf("Meio de campo:\n");
    imprimirFormacao(meias, 4);

    printf("Atacantes:\n");
    imprimirFormacao(ataque, 2);


}
