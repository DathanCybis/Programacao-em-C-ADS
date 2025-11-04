#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "calculos.h"
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int y;
    printf("Digite um número inteiro: ");
    scanf("%d", &y);

    int quad = quadrado(y);
    int cub = cubo(y);

    printf("O quadrado de %d = %d\nO cubo de %d = %d\n", y, quad, y, cub);
    printf("O valor da constante pi: %.2f", _PI);

    return 0;
}
