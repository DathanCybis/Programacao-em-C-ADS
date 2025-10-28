#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//ainda n funcionando!!!
void calculaMedia(int n){
    float valor, media, soma=0;
    int i;
    for(i=0;i < n;i++){
        printf("Digite o valor: ");
        scanf(" %f", &valor);
        soma = soma + valor;
    }
    media = soma / n;
    printf("\nMédia = %.2f\n", media);
}
void areaCubo(float lado){
    float area;
    area = lado * lado * 6;
    printf("\nA área do cubo: %.2f\n", area);
}
void fatorialNum(int n){
    int cont, fat;
    for(cont = 1; cont <= n; cont++){
        fat = fat * cont;
    }
    printf("O fatorial de %d é igual a: %d\n", n, fat);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, n, qtde;
    float lado;

    do{
        printf("****Menu****\n");
        printf("[1] Média de N valores\n");
        printf("[2] Área do cubo\n");
        printf("[3] Fatorial\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao != 0){
        case 1:
            printf("\nDigite a quantidade de valores: ");
            scanf("%d", &qtde);
            calculaMedia(qtde);
            break;
        case 2:
            printf("\nDigite o valor da aresta: ");
            scanf("%f", &lado);
            areaCubo(lado);
            break;
        case 3:
            printf("\nDigite o número: ");
            scanf("%d", &n);
            fatorialNum(n);
            break;
        case 0:
            printf("\nPrograma finalizado!...\a"); //O caractere \a emite som
        default:
            printf("Opção inválida!");
        }
        //system("pause");
        //system("cls");
    }while (opcao != 0);



    return 0;
}
