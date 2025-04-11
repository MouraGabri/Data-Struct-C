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
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);

    alunos = malloc(tamanho_vetor * sizeof(struct cadastro_alunos));

    if (alunos == NULL)
    {
        printf("Alocacao mal Sucedida\n");
        exit(1);
    }
    else
    {
        printf("Alocacao Bem Sucedida\n");
    }

    // Cadastro dos alunos
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Matricula do Aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("G1: ");
        scanf("%lf", &alunos[i].g1);

        printf("G2: ");
        scanf("%lf", &alunos[i].g2);

        alunos[i].media = (alunos[i].g1 + alunos[i].g2) / 2;
        printf("Media: %.2f\n", alunos[i].media);
    }

    // Bubble sort ordenando por média
    for (int i = 0; i < tamanho_vetor - 1; i++)
    {
        for (int j = 0; j < tamanho_vetor - 1 - i; j++)
        {
            if (alunos[j].media > alunos[j + 1].media)
            {
                struct cadastro_alunos aux = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = aux;
            }
        }
    }

    // Imprimir todos os alunos
    printf("\nTodos os alunos ordenados por media:\n");
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Matricula: %d | G1: %.2f | G2: %.2f | Media: %.2f\n",
               alunos[i].matricula, alunos[i].g1, alunos[i].g2, alunos[i].media);
    }

    // Alunos que precisam de substitutiva
    printf("\nAlunos que precisam fazer a substitutiva (media < 6.0):\n");
    for (int i = 0; i < tamanho_vetor; i++)
    {
        if (alunos[i].media < 6.0)
        {
            printf("Matricula: %d | Media: %.2f\n", alunos[i].matricula, alunos[i].media);
        }
    }

    // Encontrar aluno com maior média (da forma mais simples possível)
    int maior = 0;
    for (int i = 1; i < tamanho_vetor; i++)
    {
        87 13 if (alunos[i].media > alunos[maior].media)
        {
            maior = i;
        }
    }

    printf("\nAluno com maior media:\n");
    printf("Matricula: %d | G1: %.2f | G2: %.2f | Media: %.2f\n",
           alunos[maior].matricula,
           alunos[maior].g1,
           alunos[maior].g2,
           alunos[maior].media);

    free(alunos);
}

int main()
{
    cadastro_aluno();
    return 0;
}
