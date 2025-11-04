#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1) Escreva um programa em linguagem C que lê os valores de dois vetores de números inteiros
//de tamanho 5, realiza a soma dos elementos correspondentes e apresenta o vetor resultante.
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[2] = {5, 3};
    int vetor2[2] = {2, 5};
    int soma, i;

    for(i=0; i<2; i++){
        soma = soma + vetor1[i] + vetor2[i];
    }

    printf("O resultado da soma dos valores dos vetores é: %d\n", soma);

    return 0;
}
