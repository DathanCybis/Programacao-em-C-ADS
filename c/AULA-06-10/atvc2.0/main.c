#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0;
    float vetor[5];

    for(i=0;i<5;i++){
        printf("Digite um valor real: ");
        scanf("%f", &vetor[i]);
    }
    printf("\nValores na ordem inversa:");
    for(i=4; i>=0; i--){
        printf("\n%.2f", vetor[i]);
    }
    return 0;
}
