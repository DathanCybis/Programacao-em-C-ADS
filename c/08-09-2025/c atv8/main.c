#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma, cont;

    cont = 0;
    soma = 0;

    while(cont <= 100){
        soma = soma + cont;
        cont++;
    }
    printf("Soma: %d", soma);

    return 0;
}
