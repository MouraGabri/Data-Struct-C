#include <stdlib.h>
#include <stdlib.h>
#define tamanho 10

int vetor[tamanho];

void cadastrarValoresArray()
{
    printf("Cadastre 10 valores na lista:\n");

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Valores na lista:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
    printf("Valores na lista Ordenados:\n");
    for (int contador = 1; contador < tamanho; contador++)
    {
        for (int i = 0; i < tamanho - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                int aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

    printf("Valores na lista:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
}
int main()
{
    cadastrarValoresArray();
    return 0;
}
