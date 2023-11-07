#include <stdio.h>
#include <stdlib.h>

int main()
{

    int semana;
    float valor;
    float desconto15, desconto10;

    printf("Digite um numero correspondente a um dia da semana: ");
    scanf("%d", &semana);

    printf("Qual o valor do produto: ");
    scanf("%f", &valor);

    system("cls");

    switch (semana)
    {
    case 1:
        if (valor >= 100.00)
        {
            desconto15 = valor * 0.15;
            valor = valor - desconto15;
        }

        printf("-------------------------------\n");
        printf("promocao: Fim de semana\n");
        printf("Valor do produto: %.2f \n", valor);
        printf("-------------------------------\n");

        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if (valor >= 100.00)
        {
            desconto10 = valor * 0.10;
            valor = valor - desconto10;
        }

        printf("-------------------------------\n");
        printf("promocao: Dia de Semana\n");
        printf("Valor do produto: %.2f \n", valor);
        printf("-------------------------------\n");
        break;
    case 7:
        if (valor >= 100.00)
        {
            desconto15 = valor * 0.15;
            valor = valor - desconto15;
        }

        printf("-------------------------------\n");
        printf("promocao: Fim de Semana\n");
        printf("Valor do produto: %.2f \n", valor);
        printf("-------------------------------\n");
        break;

    default:
        break;
    }

    return 0;
}