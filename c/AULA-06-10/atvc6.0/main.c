#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[5], vetor2[5], i, total[5];
    for(i=0; i<5; i++){
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    for(i=0; i<5; i++){
    printf("Digite o elemento %d: ", i+1);
    scanf("%d", &vetor2[i]);
    }

    for(i=0; i<5; i++){
        total[i] = vetor1[i] + vetor2[i];
    }
    printf("Valores transferidos para o total: ");
    for(i=0; i<5; i++){
        printf("\nElemento %d = %d", i+1, total[i]);
    }
    return 0;

}
