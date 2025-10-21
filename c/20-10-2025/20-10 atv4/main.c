#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x = 12;
    int *ponteiro = &x;
    printf("%d\n", x);
    printf("%p", ponteiro);

    return 0;
}
