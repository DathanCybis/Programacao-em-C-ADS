#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char palavra[100];
    int i, tam, qntcon=0, qntvog=0;
    printf("Digite uma palavra: ");
    gets(palavra);
    //printf("%s", palavra);

    tam = strlen(palavra);
    strlwr(palavra);

    for(i=0; i<tam; i++){
        char letra = palavra[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){ // o problema era as aspas "pqp" 'uau', para str sempre aspas simples ''
            qntvog++;
        }else{
            qntcon++;
        }
    }
    printf("Quantidade de vogais: %d\n", qntvog);
    printf("Quantidade de consoantes: %d\n", qntcon);


    return 0;
}
