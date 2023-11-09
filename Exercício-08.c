#include <stdio.h>
#include <stdlib.h>

int main(){

int i, numero;

printf("Digite um numero: ");
scanf("%d", &numero);

for (i = numero; i >= 0; i--)
{
    
    printf("Numero: %d \n", i);
    printf("-------------------\n");
}




    return 0;
}