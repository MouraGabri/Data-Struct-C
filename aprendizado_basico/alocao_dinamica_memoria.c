#include <stdio.h>
#include <stdlib.h>

void alocacao_dinamica()
{
    // ALOCAÇÃO: Aqui, p é declarado como um ponteiro para inteiro
    int *p = (int *)malloc(sizeof(int)); // p vai armazenar o endereço de memória onde um inteiro será alocado

    // VERIFICAÇÃO DA ALOCAÇÃO: Verificando se a alocação de memória foi bem-sucedida
    if (p == NULL)
    {
        // ERRO NA ALOCAÇÃO: Caso a alocação falhe, exibe uma mensagem de erro
        printf("Erro ao alocar a memoria\n");
        return; // RETORNO: Encerra a função se a alocação falhou. Não é necessário retornar 0 ou 1 aqui,
                // pois a função é do tipo void (não retorna valor). O "return" apenas encerra a execução da função.
    }

    // DESCRIÇÃO DO PONTEIRO: p é o ponteiro, uma variável que armazena o endereço de memória.
    // *p é usado para acessar o valor armazenado no endereço de memória para o qual o ponteiro p aponta,
    // e também pode ser usado para atribuir um valor a esse local de memória.

    // ARMAZENAMENTO DO VALOR: Armazenando o valor 42 no endereço de memória apontado por p
    *p = 42; // *p acessa o endereço de memória que p aponta e armazena o valor 42 lá

    // EXIBIÇÃO DO VALOR: Exibindo o valor armazenado no endereço apontado por p
    printf("Valor armazenado em p? %d\n", *p); // Aqui, *p é usado para acessar o valor armazenado (42)

    // LIBERAÇÃO DE MEMÓRIA: Liberando a memória alocada, deixando o espaço livre para ser reutilizado
    free(p); // Após liberar a memória, o ponteiro p não deve mais ser usado para acessar a memória.
}

int main()
{
    alocacao_dinamica();
    return 0; // RETORNO NO MAIN: O retorno aqui no main indica que o programa foi executado corretamente (retorna 0 para sistemas operacionais)
}
