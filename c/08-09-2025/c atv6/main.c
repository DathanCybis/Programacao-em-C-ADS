#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n_lados, cont;
    float lado, perimetro;

    printf("Digite o n�mero de lados do pol�gono (>2): ");
    scanf("%d", &n_lados);

    perimetro = 0;
    cont = 1;

    while(cont <= n_lados){
        printf("Digite o tamanho do lado em (cm): ");
        scanf("%f", &lado);

        perimetro = perimetro + lado;
        cont++;
    }

    printf("O per�metro do pol�gono de %d lados: %.2fcm", n_lados, perimetro);

    return 0;
}
