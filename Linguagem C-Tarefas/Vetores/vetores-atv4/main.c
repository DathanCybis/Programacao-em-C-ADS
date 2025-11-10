#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//4) Escreva um programa em linguagem C que leia 3 números inteiros e os armazene em um
//vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[3] = {2, 8, 6}, i, maior, indice;
    printf("Valores do vetor: ");
    for(i=0; i<3; i++){
        printf("%d ", vetor1[i]);
    }
    printf("\n");
    for(i=0; i<3; i++){
        if ((i == 0) || (vetor1[i] > maior)){
            maior = vetor1[i];
            indice = i;
        }
    }
    printf("O maior elemento é = %d\n", maior);
    printf("Ele se encontra no índice: %d", indice);

    return 0;
}
