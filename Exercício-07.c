#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao;

    printf("  |- Menu -|\n");
    printf("-----------------------\n");
    printf("  1 - Novo Jogo \n");
    printf("  2 - Carregar Jogo \n");
    printf("  3 - Configuracao \n");
    printf("-----------------------\n");
    printf(" ");
    scanf("%d", &opcao);
    
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("---------------------------------\n");
        printf("Carregando novo jogo \n... Aguarde\n");

        printf("---------------------------------\n");
        break;
    case 2:
        printf("---------------------------------\n");
        printf("Carregando jogo salvo ... \n Espere umpouco e ja estara de volta\n");

        printf("---------------------------------\n");
        break;
    case 3:
        printf("------------------------------------\n");
        printf("-  Configuracoes de Sensibilidade - \n");
        printf(" -  Configuracoes de Controle    - \n");
        printf("  -  Configuracoes de Video     - \n");
        printf("  -  Configuracoes de Audio     - \n");
        printf("   -           Sair            - \n");
        printf("---------------------------------\n");
        break;

    default:
        printf("-----------------------------\n");
        printf("opcao Invalida... \nSelecione novamente\n");
        printf("-----------------------------\n");
        break;
    }

    return 0;
}