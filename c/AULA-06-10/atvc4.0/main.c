#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char palavra[100];
    int qntc=0, qntv=0, i, tam;

    printf("Digite uma palavra: ");
    gets(palavra);
    tam = strlen(palavra);//retorna a qnt de char na str
//  printf("%d",tam);
    strlwr(palavra); //converte todos os caracteres da str para minusculas

    for(i=0; i < tam; i++){
        if(palavra[i] == "a")
                qntv++;
        else
                qntc++;
    }
    printf("Quantidade de vogais: %d\n", qntv);
    printf("Quantidade de consoantes: %d", qntc);

    return 0;

}
