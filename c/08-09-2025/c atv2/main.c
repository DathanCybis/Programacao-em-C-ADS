#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n, soma, media, maior, menor;
    int cont=1;

    printf("Digite o %dº número: ",cont);
    scanf("%f", &n);
    maior = n;
    menor = n;
    soma = n;

    for (cont = 2; cont <= 10; cont++){
        printf("Digite o %dº número: ",cont);
        scanf("%f", &n);
        soma = soma + n;
        if(n > maior)
            maior = n;
        if(n < menor)
            menor = n;
    }

    media = soma/10;
    printf("Soma: %.2f\n",soma);
    printf("Media: %.2f\n",media);
    printf("Maior: %.2f\n",maior);
    printf("Menor: %.2f\n",menor);

    return 0;
}

