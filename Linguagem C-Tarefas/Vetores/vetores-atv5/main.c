#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//5) Escreva um programa em linguagem C que recebe uma string e imprime a mesma de trás
//para frente.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char vetor[] = "teste";
    int i;
    int tamanho = strlen(vetor);


    printf("Vetor original: %s\n", vetor);
    printf("Vetor invertido: ");

    for(i=tamanho-1; i>-1; i--){
        printf("%c", vetor[i]);
    }
    return 0;
}
