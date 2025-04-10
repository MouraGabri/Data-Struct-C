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

        // vai percorrer apenas o tamanho do vetor(por isso tem um loop externo)
        for (int contador = 1; contador < tamanho_vetor; contador++)
        {
            // for inteiro para fazer as comparações entre os valores
            for (int i = 0; i < tamanho_vetor - 1; i++)
            {
                if (alunos[i].media > (alunos[i].media + 1))
                {
                    int aux = alunos[i].media;
                    alunos[i].media = alunos[i].media + 1;
                    alunos[i].media + 1 == aux;
                }

                // aux = vetor[i];
            }
        }
        printf("Valores na lista:\n");
        for (int i = 0; i < tamanho_vetor; i++)
        {
            printf("%.2f,", alunos[i]);
        }
    }
}
int main()
{
    cadastro_aluno();
    return 0;
}
