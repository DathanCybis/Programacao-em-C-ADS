#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, somatorio;

    a=1;
    somatorio = 0;

    while(a <= 7){
        somatorio = somatorio + (3*(a*a) + a - 2);
        a++;
    }

    printf("O somat�rio: %d", somatorio);

    return 0;
}
