#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, vetor[30], pos;

    i=0;
    do{
            printf("Digite um valor, [0 para sair]: ");
            scanf("%d", &vetor[i]);
            pos = i;
            i++;
    }while(vetor[pos] != 0 && i<10);
    printf("Valores digitados: ");
    for(i=0; i<=pos; i++){
        printf("\n%d",vetor[i]);
    }
    return 0;

}
