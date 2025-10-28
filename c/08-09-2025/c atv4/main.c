#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um número positivo: ");
    scanf("%d", &n);

    while (n > 0)
        n = n - 2;
    if (n == 0)
        printf("O número é par");
    else
        printf("O número é impar");



    return 0;
}
