#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraMsg(){
    printf("Bela Mensagem!\n");
    printf("Eu amo programa��o!\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    mostraMsg();


    return 0;
}
