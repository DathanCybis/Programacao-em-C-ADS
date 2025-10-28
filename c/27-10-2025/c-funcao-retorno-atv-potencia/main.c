#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int potenciaNum(int base, int expoente){
    int resultado = 1;
    for(int i=0; i < expoente; i++){
        resultado = resultado * base;
    }
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado;

    printf("Digite a base da potência: ");
    scanf("%d", &num1);

    printf("Digite o expoente da potência: ");
    scanf("%d", &num2);

    resultado = potenciaNum(num1, num2);

    printf("O resultado da potência de %d por %d = %d", num1, num2, resultado);

    return 0;
}
