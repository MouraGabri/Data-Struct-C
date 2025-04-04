#include <stdio.h>

#define TAMANHO 11 // Define um tamanho fixo para o vetor (substituição feita pelo pré-processador).
                   // Assim o compilador já reserva esse espaço na memória antes da execução do programa.

void criando_vetor()
{
    int my_vec[TAMANHO]; // Declaração do vetor estático

    // Preenchendo o vetor com múltiplos de 3
    for (int i = 0; i < TAMANHO; i++)
    {
        my_vec[i] = i * 3;
    }

    // Exibindo os valores armazenados
    printf("Valores armazenados no vetor:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", my_vec[i]);
    }
    
    printf("\n");
     // Nova linha para melhor visualização
    printf("Saiu do for");
}

int main()
{
    criando_vetor(); // Chama a função para criar e exibir o vetor
    return 0;
}
