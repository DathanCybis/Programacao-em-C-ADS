#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *x, valor, y;
    valor = 35;
    x = &valor; //atribuir o endereço de valor a x
    y = *x; //atribuir o conteúdo da variável apontada por x a y // ou seja, 35 (nesse caso)

    printf("Endereço da variável comum valor:     %p\n", &valor);
    printf("Lendo o conteúdo do ponteiro x:       %p\n", x);
    printf("Endereço da variável ponteiro x:      %p\n", &x);
    printf("Conteúdo da variaável apontada por x: %d\n", *x);
    printf("conteúdo da variável comum y:         %d\n", y);

    return 0;
}
