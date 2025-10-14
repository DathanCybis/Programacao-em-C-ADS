#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que leia dois vetores, A e B, de dimens�o 4, e realize a troca dos elementos desses vetores. Ou seja, ap�s a execu��o do programa,
//o vetor B dever� conter os valores fornecidos para o vetor A e vice-versa. Ao final, o programa dever� imprimir os dois vetores na tela.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v1[4];
    int v2[4];
    int vtemp[4], i;
    //L� os n�meros
    printf("Vetor A:\n");
    for (i=0; i<4; i++){
        printf("Digite o %d� n�mero: ", i+1);
        scanf("%d", &v1[i]);
    }
    printf("\nVetor B:\n");
    for (i=0; i<4; i++){
        printf("Digite o %d� n�mero: ", i+1);
        scanf("%d", &v2[i]);
    }
    //Transfere os n�meros para o tempor�rio e guarda no vetor inverso
    for (i=0; i<4; i++){
        vtemp[i] = v1[i];
        v1[i] = v2[i];
        v2[i] = vtemp[i];
    }
    //Exibe o resultado na tela
    printf("\nOs valores do vetor A s�o:\n");
    for (i=0; i<4; i++){
        printf("%d", v1[i]);
    }
    printf("\nOs valores do vetor B s�o:\n");
    for (i=0; i<4; i++){
        printf("%d", v2[i]);
    }

    return 0;
}
