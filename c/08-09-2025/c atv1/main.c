#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char msg[50];
    int cont;

    printf("Digite uma mensagem: ");
    gets(msg);

    for(cont=1; cont <= 10; cont++){
        printf("%s \n",msg);
    }

    return 0;
}
