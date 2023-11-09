#include <stdio.h>

int main()
{
    int opcao;
    double valor, resultado;

    while (1)
    {

        printf("------------------------------\n");
        printf("    |Escolha a conversao| \n");
        printf("- 1 Quilometros para Milhas -\n");
        printf("- 2 Celsius para Fahrenheit -\n");
        printf("- 3 Milhas para Quilômetros -\n");
        printf("- 4 Fahrenheit para Celsius -\n");
        printf("  - 0 Sair do programa   -\n");
        printf("------------------------------\n");

        printf("Digite o número da opção: ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            break;
        }

        switch (opcao)
        {
        case 1:

            printf("Digite o valor em Quilômetros: ");
            scanf("%lf", &valor);

            resultado = valor * 0.621371;
            printf("%.2lf Quilômetros equivalem a %.2lf Milhas.\n", valor, resultado);
            printf("-----------------------------------------------------------------\n");

            break;
        case 2:

            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &valor);

            resultado = (valor * 9 / 5) + 32;
            printf("%.2lf Celsius equivalem a %.2lf Fahrenheit.\n", valor, resultado);
            printf("-----------------------------------------------------------------\n");

            break;
        case 3:
            printf("Digite o valor em Milhas: ");
            scanf("%lf", &valor);

            resultado = (valor / 0.621371);
            printf("%.2lf Milhas equivalem a %.2lf Quilômetros.\n", valor, resultado);
            printf("-----------------------------------------------------------------\n");

            break;
        case 4:

            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &valor);

            resultado = (valor - 32) / 1.8;
            printf("%.2lf Fahrenheit equivalem a %.2lf Celsius.\n", valor, resultado);
            printf("-----------------------------------------------------------------\n");
            break;
        default:
            printf("---------------------------------\n");
            printf("Opção inválida. Tente novamente.\n");
            printf("----------------------------------\n");
        }
    }

    return 0;
}