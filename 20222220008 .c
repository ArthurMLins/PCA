#include <stdio.h>
#include <stdlib.h>

int main(){

    char continuar[3];

    float nota1, nota2, nota3, maior1, maior2, maior3, menor1, menor2, menor3, media, maior, menor;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    maior1 = nota1;
    menor1 = nota1;

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    maior2 = nota2;
    menor2 = nota2;

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    maior3 = nota3;
    menor3 = nota3;

    media = (nota1+nota2+nota3)/3;
    maior = media;
    menor = media;

    printf("Queres adicionar as notas de outro aluno?\n");
    scanf("%s", continuar);

    while(*continuar == *"sim"){

        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);

        printf("Digite a terceira nota:\n");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3)/3;

        if (nota1 > maior1){

            maior1 = nota1;
        }

        else{

            if(nota1 < menor1){

                menor1 = nota1;
            }
        }

        if (nota2 > maior2){

            maior2 = nota2;
        }

        else{

            if(nota2 < menor2){

                menor2 = nota2;
            }
        }

        if (nota3 > maior3){

            maior3 = nota3;
        }

        else{

            if(nota3 < menor3){

                menor3 = nota3;
            }
        }

        if (media > maior){

            maior = media;
        }

        else{

            if(media < menor){


                menor = media;
            }
        }

        printf("Queres adicionar as notas de outro aluno?\n");
        scanf("%s", continuar);
    }

    printf("Melhor nota do primeiro exercicio: %.2f\n", maior1);
    printf("Pior nota do primeiro exercicio: %.2f\n", menor1);

    printf("Melhor nota do segundo exercicio: %.2f\n", maior2);
    printf("Pior nota do segundo exercicio: %.2f\n", menor2);

    printf("Melhor nota do terceiro exercicio: %.2f\n", maior3);
    printf("Pior nota do terceiro exercicio: %.2f\n", menor3);

    printf("Maior média: %.2f\n", maior);
    printf("Menor média: %.2f\n", menor);
}
