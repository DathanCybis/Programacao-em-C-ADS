#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char c;
    int cont = 0;

    do{
        printf("Digite um caracter: ");
        scanf(" %c", &c);
        cont++;


    }while (c != '$' && cont != 5);

    printf("== Fim do programa ==");
    return 0;
}
