#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int a, int b){
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int resultado;
    int num1, num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    resultado = somaNum(num1, num2);

    printf("O resultado de %d + %d = %d", num1, num2, resultado);
    return 0;
}
