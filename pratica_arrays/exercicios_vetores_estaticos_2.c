#include <stdio.h>
#define tamanho 11

int vetor[tamanho];

void atribuir_valores()
{
    printf("Criando Vetor com 11 elementos:\n");
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i * 2;
    }
}

void imprimir_valores_lista()
{
    printf("Imprimindo valores inseridos na lista:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
}

void somar_valores_lista()
{
    int soma = 0;
    int med = 0;

    for (int j = 0; j < tamanho; j++)
    {
        soma += vetor[j];
    }

    med = soma / tamanho;
    printf("\nSoma dos valores: %d\n", soma);
    printf("Quantidade da lista: %d\n", tamanho);
    printf("Média dos valores: %d\n", med);
}

int main()
{
    atribuir_valores();
    imprimir_valores_lista();
    somar_valores_lista();
    return 0;
}
