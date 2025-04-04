#include <stdio.h> //Biblioteca Padrão para entrada e saída de dados

/*
 * A função main() é o ponto de entrada do programa em C.
 * Como o C não é uma linguagem interpretada que lê o código linha por linha,
 * como Python, o compilador precisa de um método (função) específico onde a execução começa.
 * Sem a função main(), o compilador não saberá onde iniciar o programa,
 * resultando em erro de compilação.
 * O "int" antes de main indica que a função retorna um número inteiro.
 * O "return 0;" ao final informa ao sistema operacional que o programa foi executado com sucesso.
 *
 * Quando o programa é compilado e gerado um arquivo executável (.exe),
 * o compilador e o sistema operacional dependem da função main() para saber por onde começar a execução.
 */

void tipos_dados_c()
{ // Coloco void nessa função pois o output vai ser apenas texto e não retornar algo para o Sistema
    int idade = 25;
    float altura = 1.60;
    double salario = 1800;
    char letra = 'G';

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salario: %.2f\n", salario);
    printf("Letra: %c\n", letra);
}

int operadores_matematicos_c()
{
    int a = 10, b = 20;

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %d\n", a / b);
    printf("Resto: %d\n", a % b);

    return 0;
}

void welcome_c()
{
    printf("Olá, Seja bem-vindo\n");
}

int main()
{
    welcome_c();
    tipos_dados_c();
    operadores_matematicos_c();
    return 0; // No C, todas as funções precisam retornar algo, sendo 0 -> Terminou sem erros, sendo 1 -> Indica que deu um erro
}
