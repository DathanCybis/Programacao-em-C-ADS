#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraMsg(){
    printf("Bela Mensagem!\n");
    printf("Eu amo programação!\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    mostraMsg();


    return 0;
}
