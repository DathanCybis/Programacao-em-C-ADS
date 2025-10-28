#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(int vetor[], int tamanho){
    int soma=0;
    for(int i=0; i < tamanho; i++){
        soma = soma + vetor[i];
    }
    return(float)soma/tamanho;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam, i;
    int numeros[tam];
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    for(i=0; i < tam; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("A média dos números é: %.2f", calcularMedia(numeros, tam));

    return 0;
}
