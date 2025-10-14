#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, vetor[5], soma = 0;
    for(i=0; i < 5; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Soma: %d", soma);



    return 0;
}
