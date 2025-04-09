#include <stdio.h>
#include <stdlib.h>

int tamanho_vetor;
struct cadastro_alunos
{
    int matricula;
    double g1, g2, media;
};
struct cadastro_alunos *alunos;

void cadastro_aluno()
{
    printf("Informe o tamanho do vetor:");
    scanf("%d", &tamanho_vetor);

    alunos = malloc(tamanho_vetor * sizeof(struct cadastro_alunos));

    if (alunos == NULL)
    {
        printf("Alocacao mal Sucedida");
        return 1;
    }
    else
    {
        printf("Alocacao Bem  Sucedida\n");
    }

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Matricula do Aluno:", i);
        scanf("%d", &alunos[i].matricula);

        printf("G1:");
        scanf("%lf", &alunos[i].g1);

        printf("G2:");
        scanf("%lf", &alunos[i].g2);

        alunos[i].media = ((alunos[i].g1 + alunos[i].g2) / 2);
        printf("Media: %.2f", alunos[i].media);
    }
}
int main()
{
    cadastro_aluno();
    return 0;
}
