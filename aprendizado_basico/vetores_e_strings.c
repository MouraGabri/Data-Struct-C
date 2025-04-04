#include <stdio.h>
void vetores_strings()
{
    int numeros[] = {10, 20, 30, 40, 50};

    printf("Exemplo de vetor em C\n:");
    for (int i = 0; i < 4; i++)
    {
        printf("Numeros no vetor %d\n:", numeros[i]);
    }
}

void strings()
{
    char palavra[] = "C e poderoso";
    printf("Exemplo de string: %s\n", palavra);
}

int main()
{
    strings();
    return 0;
}
