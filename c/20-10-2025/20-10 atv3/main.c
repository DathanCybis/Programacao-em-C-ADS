#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirTabuada(int num){
    int i;
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    imprimirTabuada(numero);


    return 0;
}
