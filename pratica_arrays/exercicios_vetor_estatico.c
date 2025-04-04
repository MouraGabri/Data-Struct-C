#include <stdio.h>
#define TAMANHO 11

int main()
{
    int tabuada[TAMANHO];

    // Preenche com a tabuada do 5
    for (int i = 0; i < TAMANHO; i++)
    {
        tabuada[i] = i * 5;
    }
    // Imprime apenas os pares da tabuada
    printf("Numeros pares da tabuada do 5:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        if (tabuada[i] % 2 == 0)
        {
            printf("Indice %d = %d\n", i, tabuada[i]);
        }
    }

    return 0;
}
