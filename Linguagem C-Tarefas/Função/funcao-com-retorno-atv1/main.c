#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaNum(int n1, int n2){
    return n1+n2;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int resultado;

    resultado = somaNum(5, 3);

    printf("Resultado = %d", resultado);

    return 0;
}
