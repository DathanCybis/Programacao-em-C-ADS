#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1. Crie uma estrutura chamada "Aluno" que armazene as seguintes informações de um aluno:
//nome (até 50 caracteres), idade (inteiro) e média (ponto flutuante). Em seguida, crie um vetor
//de "Aluno" para armazenar informações de vários alunos fictícios (pelo menos 3). Preencha
//cada posição do vetor com informações diferentes de alunos. Por fim, imprima as informações
//de todos os alunos armazenados no vetor.

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i;
    struct aluno{
        char nome[50];
        int idade;
        float media;
    };
    struct aluno vetor[3];

    printf("\n ----- Cadastro de Alunos -----\n\n");

    for (i=0; i<3; i++){
        printf("Digite o nome do %d° aluno: ", i+1);
        scanf(" %49[^\n]", vetor[i].nome);
        printf("Digite a idade do %d° aluno: ", i+1);
        scanf("%d", &vetor[i].idade);
        printf("Digite a média do %d° aluno: ", i+1);
        scanf("%f", &vetor[i].media);
    }

    printf("\n\n ----- Informações de Alunos -----\n\n");
    for (i=0; i<3; i++){
        printf("O nome do %d° aluno: %s\n", i+1, vetor[i].nome);
        printf("A idade do %d° aluno: %d\n", i+1, vetor[i].idade);
        printf("A média do %d° aluno: %.2f\n", i+1, vetor[i].media);

    }

    return 0;
}
