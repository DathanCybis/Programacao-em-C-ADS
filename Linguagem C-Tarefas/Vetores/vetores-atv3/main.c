#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//3) Escreva um programa C para inserir 5 números inteiros em um vetor e imprimir todos os
//elementos negativos. Caso o usuário não tenha digitado números negativos, exiba uma
//mensagem que não há números negativos no vetor.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[3], contn=0;

    for(int i=0; i<3; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    for(int i=0; i<3; i++){
        if(vetor1[i] < 0){
            contn++;
            if(contn == 1){
                printf("Números negativos digitados: ");
            }
            printf("%d ", vetor1[i]);
        }
    }

    if(contn < 1){
        printf("Nenhum número negativo foi digitado!");
    }
    printf("\n");

    return 0;
}
