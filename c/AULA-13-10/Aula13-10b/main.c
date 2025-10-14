#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int m[2][2], i, j;

    for (i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Informe o valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    for (i=0; i<2; i++){
            printf("\n");
        for(j=0; j<2; j++){
            m[i][j] = m[i][j] * 4;
            printf("\t%d", m[i][j]);
        }
    }

    return 0;
}
