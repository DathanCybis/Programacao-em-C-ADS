#include <stdio.h>
#include <locale.h>

struct aluno {
    char nome[50];
    float notas[3];
};

typedef struct aluno TipoAluno;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, j;

    TipoAluno turma[3] = {
        {"Alice Silva", {7.5, 8.0, 9.0}},
        {"João Pereira", {8.0, 6.5, 7.0}},
        {"Bruno Silva", {9.5, 9.5, 10.0}}
    };

    printf("## Informações da Turma de Alunos ##\n\n");
    printf("--------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf("Aluno %d: %s\n", i + 1, turma[i].nome);
        printf("  Notas: ");

        for (j = 0; j < 3; j++) {
            printf("%.1f", turma[i].notas[j]);
            if (j < 2) {
                printf(", ");
            }
        }
        printf("\n");

        printf("--------------------------------------\n");
    }

    return 0;
}
