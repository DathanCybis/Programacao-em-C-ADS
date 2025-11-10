#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//6) Faça um programa em linguagem C que receba a cotação do dia do dólar em relação ao real,
//receba 3 valores em reais, armazene em um vetor, depois exiba esses valores convertidos em
//dólar.
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float dolarHJ = 5.32;
    float vetorRS[3] = {100, 50, 25};
    int i;

    printf("Valores recebidos em R$(Reais):\n");
    for(i=0; i<3; i++){
        printf("R$%.2f\n", vetorRS[i]);
    }
    printf("Valores R$(Reais) convertidos em $(Dólar americano):\n");
    for(i=0; i<3; i++){
        printf("$%.2f\n", vetorRS[i] / dolarHJ);
    }

    return 0;
}
