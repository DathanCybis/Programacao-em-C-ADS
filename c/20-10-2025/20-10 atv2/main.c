#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct calculadora{
    float a, b;
    char operacao;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct calculadora calc;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &calc.a);

    printf("Digite a operação(+,-,*,/): ");
    scanf(" %c", &calc.operacao);

    printf("Digite o segundo número: ");
    scanf("%f", &calc.b);

    switch(calc.operacao){
    case '+':
        resultado = calc.a + calc.b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '-':
        resultado = calc.a - calc.b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '*':
        resultado = calc.a * calc.b;
        printf("Resultado: %.2f\n", resultado);
        break;
    case '/':
        if(calc.b != 0){
            resultado = calc.a / calc.b;
            printf("Resultado: %.2f\n", resultado);
        }
        else{
            printf("Não existe divisão por zero\n");
        }
        break;
    default:
        printf("Operação inválida!");
    }

    return 0;
}
