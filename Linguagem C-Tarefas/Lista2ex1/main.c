#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Escreva um programa que leia dois vetores, A e B, de dimensão 4, e realize a troca dos elementos desses vetores. Ou seja, após a execução do programa,
//o vetor B deverá conter os valores fornecidos para o vetor A e vice-versa. Ao final, o programa deverá imprimir os dois vetores na tela.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v1[4];
    int v2[4];
    int vtemp[4], i;
    //Lê os números
    printf("Vetor A:\n");
    for (i=0; i<4; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v1[i]);
    }
    printf("\nVetor B:\n");
    for (i=0; i<4; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v2[i]);
    }
    //Transfere os números para o temporário e guarda no vetor inverso
    for (i=0; i<4; i++){
        vtemp[i] = v1[i];
        v1[i] = v2[i];
        v2[i] = vtemp[i];
    }
    //Exibe o resultado na tela
    printf("\nOs valores do vetor A são:\n");
    for (i=0; i<4; i++){
        printf("%d", v1[i]);
    }
    printf("\nOs valores do vetor B são:\n");
    for (i=0; i<4; i++){
        printf("%d", v2[i]);
    }

    return 0;
}
