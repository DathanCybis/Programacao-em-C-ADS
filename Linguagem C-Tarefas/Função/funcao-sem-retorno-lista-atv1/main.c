#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void saudacao(char pessoa[]){
    printf("Sauda��o %s", pessoa);

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];

    printf("Qual o seu nome?: ");
    gets(nome);

    saudacao(nome);

    return 0;
}
