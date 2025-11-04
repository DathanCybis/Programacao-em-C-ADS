#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//2) Escreva um programa na linguagem C que permita criar um vetor 1 de 5 posições e outro
//vetor 2 também de 5 posições. O programa deve copiar os valores do vetor 1 para o vetor 2.
//Imprima o vetor 2.
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[3] = {3, 5, 9};
    int vetor2[3] = {2, 4, 6};

    for(int i=0; i < 3; i++){
        vetor2[i] = vetor1[i];
    }

    printf("O vetor 2 agora é: ");

    for(int i=0; i < 3; i++){
        if (i < 2){
            printf("%d, ", vetor2[i]);
        }
        else{
            printf("%d\n", vetor2[i]);
        }
    }

    return 0;
}
