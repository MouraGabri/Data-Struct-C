#include <stdio.h>

void controlar_fluxo()
{
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Menor de idade");
    }
    else
    {
        printf("Maior de idade");
    }
}

void switch_case()
{
    int opcao;
    printf("Escolha um numero de 1 - 3/n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Voce acertou!!!");
        break;

    case 2:
        printf("Voce acertou!!!");
        break;

    case 3:
        printf("Voce acertou!!!");
        break;

    default:
        printf("OPCÁO INVÁLIDA!!!!!!");
        break;
    }
}
int main()
{
    switch_case();
    return 0;
}
