#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, soma, cont;
    soma = 0;
    cont = 0;

    do{
        printf("Digite um n�mero: ");
        scanf("%d", &n);
        soma = soma + n;
        cont++;

    }while (n > 0);
    printf("A soma dos valores digitados foi: %d \n",soma);
    printf("A quantidade de n�meros digitados foi: %d",cont);
    return 0;
}
