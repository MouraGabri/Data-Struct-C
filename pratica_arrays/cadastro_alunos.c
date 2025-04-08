#include <stdio.h>
#include <stdlib.h>

int tamanho_vetor;

struct cadastro_alunos
{
    int matricula;
    double g1, g2, media;
};
struct cadastro_alunos *alunos;

void cadastrar_alunos()

    printf("Quantos Alunos serao cadastrados?:");
    scanf("%d", &tamanho_vetor);

    alunos = malloc(tamanho_vetor * sizeof(struct cadastro_alunos));

    if (alunos == NULL)
    {
        printf("Erro ao alocar a memória\n");
        return 1;
    }

    else
    {
        printf("Alocacao feita com sucesso!!\n");
    }

    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Matricula do Aluno:%d:", i);
        scanf("%d", &alunos[i].matricula);

        printf("G1:%d:", i);
        scanf("%lf", &alunos[i].g1);

        printf("G2:%d:", i);
        scanf("%lf", &alunos[i].g2);
    }
}

int main()
{
    cadastrar_alunos();
    return 0;
}
