#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void soma10(int x){
    x = x + 10;
    printf("Valor de x ap�s a soma = %d\n", x);
}

void soma10p(int *x){
    *x = *x + 10;
    printf("Valor de x ap�s a soma = %d\n", *x);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    printf("O n�mero digitado foi: %d\n", num);
    //sem ponteiro
    soma10(num);
    printf("Agora o n�mero vale: %d\n", num);

    //com ponteiro
    soma10p(&num);
    printf("Agora o n�mero vale: %d\n", num);
    return 0;
}
