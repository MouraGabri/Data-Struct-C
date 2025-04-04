#include <stdio.h>

void loops_c()

{
    printf("Exemplo de For:\n");
    for (int i = 1; i <= 9; i++)
    {
        printf("Numero %d\n", i);
    }
}

void funcionamento_while()
{
    printf("Funcionamento do While\n");
    int j = 1;
    while (j <= 6)
    {
        printf("Loop em andamento %d\n", j);
        j++;
    }
}

void funcionamento_do_while()
{
    int k = 1;
    do
    {
        printf("Numero %d\n", k);
        k++;
    } while (k < 5);
}

int main()
{
    funcionamento_do_while();
    return 0;
}
