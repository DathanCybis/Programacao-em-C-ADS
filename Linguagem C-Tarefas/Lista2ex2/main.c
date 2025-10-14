#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Uma escola de idiomas possui 3 turmas (ingl�s, alem�o e franc�s) de 3 alunos cada. Escreva um programa que:
//Leia as notas dos alunos de cada turma. Calcule e informe a m�dia de cada turma.
//Informe qual turma (ou turmas) possui a maior m�dia e qual turma (ou turmas) possui a menor m�dia.


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float ingles[3], somaIn=0, mediaIn;
    float alemao[3], somaAl=0, mediaAl;
    float frances[3], somaFr=0, mediaFr;
    int i;
    //char maior[10];
    for(i=0; i<3; i++){
        printf("Digite a nota do %d� aluno da turma de ingl�s: ", i+1);
        scanf("%f", &ingles[i]);
        somaIn = somaIn + ingles[i];
        printf("Digite a nota do %d� aluno da turma de alem�o: ", i+1);
        scanf("%f", &alemao[i]);
        somaAl = somaAl + alemao[i];
        printf("Digite a nota do %d� aluno da turma de franc�s: ", i+1);
        scanf("%f", &frances[i]);
        somaFr = somaFr + frances[i];
    }
    mediaIn = somaIn / 3;
    printf("\nM�dia da turma de ingl�s: %.2f\n", mediaIn);
    mediaAl = somaAl / 3;
    printf("M�dia da turma de alem�o: %.2f\n", mediaAl);
    mediaFr = somaFr / 3;
    printf("M�dia da turma de franc�s: %.2f\n", mediaFr);

    if (mediaIn > mediaAl && mediaIn > mediaFr){
        char maior[] = "Ingl�s";
    }
    if (mediaAl > mediaIn && mediaAl > mediaFr){
        char maior[] = "Alem�o";
    }
    if (mediaFr > mediaAl && mediaFr > mediaIn){
        char maior[] = "Franc�s";
    }

    printf("A maior m�dia � da turma de %s", maior);
    return 0;
}
