#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao;

    printf("| escolha um Produto |\n");
    printf("  1 - Camisa \n");
    printf("  2 - Calca \n");
    printf("  3 - Sapato \n");
    printf("-----------------------\n");
    printf(" ");
    scanf("%d", &opcao);
    
    system("cls");

    switch (opcao)
    {
    case 1:
        printf("---------------------------------\n");
        printf("Produto selecionado: Camisa\n");
        printf("Valor: R$ 20.98\n");
        printf("---------------------------------\n");
        break;
    case 2:
        printf("---------------------------------\n");
        printf("Produto selecionado: Calca\n");
        printf("Valor: R$ 70.35\n");
        printf("---------------------------------\n");
        break;
    case 3:
        printf("---------------------------------\n");
        printf("Produto selecionado: Sapato\n");
        printf("Valor: R$ 54.67\n");
        printf("---------------------------------\n");
        break;

    default:
        printf("------------------\n");
        printf("Opcao invalida...\n");
        printf("-------------------\n");
        break;
    }

    return 0;
}