#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, primeiroNumero = 0, segundoNumero = 0, maiorNumero, menorNumero, i;

    for (i = 1; i <= 2; i++)
    {

        printf("Digite o %d Numero: ", i);
        scanf("%d", &numero);

        if (i == 1)
        {
            primeiroNumero = primeiroNumero + numero;
        }
        else if (i == 2)
        {
            segundoNumero = segundoNumero + numero;
        }
    }
    maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    printf("-----------------------------------\n");
    printf("O Maior numero e: %d \n", maiorNumero);
    printf("-----------------------------------\n");

    printf("O Menor numero e: %d \n", menorNumero);
    printf("-----------------------------------\n");

    return 0;
}