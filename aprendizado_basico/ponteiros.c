#include <stdio.h>


void ponteiros(){

int x = 10;
int *ponteiro = &x;

printf("Endereco de x: %p\n", &x);
printf("Valor de x: %d\n", x);
printf("Valor de ponteiro (endereco de x): %p\n", ponteiro);
printf("Valor apontado por ponteiro: %d\n", *ponteiro);
}


int main()
{
    ponteiros();
    return 0;
}
