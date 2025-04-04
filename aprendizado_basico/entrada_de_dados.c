#include <stdio.h>

void entrada_dados()
{
    int idade;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá, %s! Você tem %d anos.\n", nome, idade);
}
int main()
{

    entrada_dados();

    return 0;
}
