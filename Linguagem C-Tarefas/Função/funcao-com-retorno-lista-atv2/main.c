#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//2. Escreva uma função chamada potencia que recebe dois números inteiros, base e expoente,
//e retorna a base elevada ao expoente.

int potencia(int base, int expoente){
    int resul=1, i;

    for(i=0; i<expoente; i++){
        resul *= base;
    }
    return resul;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Base, Expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &Base);
    printf("Digite o expoente: ");
    scanf("%d", &Expoente);

    resultado = potencia(Base, Expoente);
    printf("O resultado da potência é = %d", resultado);
    return 0;
}
