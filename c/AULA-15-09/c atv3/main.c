#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc;
    float n1, n2, n3, soma;
    soma = 0;
    while (opc != 0){
        printf("===Escolha uma das op��es===\n");
        printf("[0] Sair\n");
        printf("[1] Soma de dois n�meros\n");

        printf("Escolha sua op��o: ");
        scanf(" %d", &opc);

        switch(opc){
            case 1: printf("Digite dois n�meros: ");
                    scanf("f%f", &n1, &n2);
                    soma = n1 + n2;
                    printf("Soma: %.2f\n", soma);
                    break;
            case 0: printf("Saindo do programa...\n");
                    break;
            default: printf("Op��o inv�lida!\n");
        };
//        system("pause");
//        system("cls");
    };

    return 0;
}
