#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//4. Crie uma função chamada converterHorasParaMinutos que receba um número inteiro
//representando horas e converta esse valor em minutos. A função deve imprimir o resultado.
//Certifique-se de que a função não retorne nenhum valor.

void converterHorasParaMinutos(int horas){
    int minutos = horas * 60;
    printf("Hora digitada: %d\n", horas);
    printf("Hora digitada em minutos: %d\n", minutos);
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hora;
    printf("Digite um número inteiro representando as horas: ");
    scanf("%d", &hora);
    converterHorasParaMinutos(hora);

    return 0;
}
