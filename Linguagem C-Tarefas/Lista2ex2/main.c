#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Uma escola de idiomas possui 3 turmas (inglês, alemão e francês) de 3 alunos cada. Escreva um programa que:
//Leia as notas dos alunos de cada turma. Calcule e informe a média de cada turma.
//Informe qual turma (ou turmas) possui a maior média e qual turma (ou turmas) possui a menor média.


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ingles[3], somaIn=0, mediaIn;
    float alemao[3], somaAl=0, mediaAl;
    float frances[3], somaFr=0, mediaFr;
    int i;
    //char maior[10];
    for(i=0; i<3; i++){
        printf("Digite a nota do %dº aluno da turma de inglês: ", i+1);
        scanf("%f", &ingles[i]);
        somaIn = somaIn + ingles[i];
        printf("Digite a nota do %dº aluno da turma de alemão: ", i+1);
        scanf("%f", &alemao[i]);
        somaAl = somaAl + alemao[i];
        printf("Digite a nota do %dº aluno da turma de francês: ", i+1);
        scanf("%f", &frances[i]);
        somaFr = somaFr + frances[i];
    }
    mediaIn = somaIn / 3;
    printf("\nMédia da turma de inglês: %.2f\n", mediaIn);
    mediaAl = somaAl / 3;
    printf("Média da turma de alemão: %.2f\n", mediaAl);
    mediaFr = somaFr / 3;
    printf("Média da turma de francês: %.2f\n", mediaFr);

    if (mediaIn > mediaAl && mediaIn > mediaFr){
        char maior[] = "Inglês";
    }
    if (mediaAl > mediaIn && mediaAl > mediaFr){
        char maior[] = "Alemão";
    }
    if (mediaFr > mediaAl && mediaFr > mediaIn){
        char maior[] = "Francês";
    }

    printf("A maior média é da turma de %s", maior);
    return 0;
}
