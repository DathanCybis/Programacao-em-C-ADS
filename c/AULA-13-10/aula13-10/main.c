#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m[2][2], maior;
    int i, j;

    for (i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Informe o valor: ");
            scanf("%f", &m[i][j]);
        }
    }

    maior = m[0][0];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if (m[i][j] > maior){
                maior = m[i][j];
            }
        }
    }

    printf("O maior numero foi: %.2f", maior);

    return 0;
}
