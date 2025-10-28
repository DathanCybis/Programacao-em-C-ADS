#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 0;

    for (cont = 0; cont <= 100; cont++){
        if (cont % 2 == 0){
            printf("%d\n",cont);
        }
    }


    return 0;
}
