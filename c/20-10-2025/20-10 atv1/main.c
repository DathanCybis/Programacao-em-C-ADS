#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct aluno{
    char nome[50], cidade[30], RA[20];
    float media;

};
int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct aluno a1, a2, a3;
    float maior;
    //lê os dados dos alunos

    printf("\nDigite o nome do aluno: ");
    gets(a1.nome);

    printf("\nDigite o RA do aluno: ");
    gets(a1.RA);

    printf("\nDigite a cidade do aluno: ");
    gets(a1.cidade);

    strlwr(a1.cidade); //converte para minúsculo

    printf("\nDigite a média do aluno: ");
    scanf("%f ", &a1.media);

    //mostra o nome dos alunos que moram em Araraquara

    if(strcmp(a1.cidade, "araraquara") == 0){
        printf("\nAluno(a) %s mora em Araraquara", a1.nome);
    }

    return 0;
}
