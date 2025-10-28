#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num, contador;

    for(contador = 1; contador <= 5; contador++){
        printf("Digite o %dº numero: \n",contador);

        scanf("%d", &num);
    }


}
