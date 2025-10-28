#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int a, int b){
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf("Digite os dois números: ");
    scanf("%d%d", &num1, &num2);
    printf("O resultado de %d + %d = %d", num1, num2, somaNum(num1, num2));
    return 0;
}
