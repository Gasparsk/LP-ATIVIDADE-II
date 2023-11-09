#include <stdlib.h>
#include <stdio.h>

int main()
{

    int primeiroNumero, segundoNumero;
    char operacao;

    printf("Digite o Primeiro Numero:");
    scanf("%d", &primeiroNumero);
    printf("---------------------------\n");

    printf("Digite o Segundo Numero:");
    scanf("%d", &segundoNumero);
    printf("---------------------------\n");

    fflush(stdin);

    printf("Digite a operacao desejada (+ , -): ");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':

        printf("---------------------------\n");
        printf("Resultado: %d \n", primeiroNumero + segundoNumero);
        printf("---------------------------\n");
        break;
    case '-':

        printf("---------------------------\n");
        printf("Resultado: %d \n", primeiroNumero - segundoNumero);
        printf("---------------------------\n");

        break;
    default:
        printf("----------------------\n");
        printf("Invalido..");
        printf("----------------------\n");
        break;
    }

    return 0;
}
