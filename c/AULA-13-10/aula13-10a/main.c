#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m[2][2], soma=0;
    int i, j;

    for (i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Informe o valor: ");
            scanf("%f", &m[i][j]);
            if (i==j){
                soma = soma + m[i][j];
            }
        }
    }

    for(i=0; i<2; i++){
            printf("\n");
        for(j=0; j<2; j++){
                printf("\t%.2f", m[i][j]);
            }
        }


    printf("\nA soma da diagonal principal é: %d", soma);

    return 0;
    }

