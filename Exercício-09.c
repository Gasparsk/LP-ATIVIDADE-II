#include <stdio.h>
#include <stdlib.h>

int main (){

int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

if (numero / numero == 0)
{
    printf(" numero primo");
}
else
{
    printf("numero nao primo");
}



    return 0;
}