#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um n�mero positivo: ");
    scanf("%d", &n);

    while (n > 0)
        n = n - 2;
    if (n == 0)
        printf("O n�mero � par");
    else
        printf("O n�mero � impar");



    return 0;
}
