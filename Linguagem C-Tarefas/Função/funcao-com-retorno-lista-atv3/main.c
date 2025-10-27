#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorNum(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
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

    resultado = maiorNum(num1, num2);

    printf("O maior entre %d e %d é %d", num1, num2, resultado);
    return 0;
}
