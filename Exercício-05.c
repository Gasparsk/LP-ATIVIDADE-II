#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lingua;

    printf("- Choose a language -\n");
    printf("  1 - English\n");
    printf("  2 - Portuguese\n");
    printf("  3 - Spanish\n");
    printf("-----------------------\n");
    printf(": ");
    scanf("%d", &lingua);

    system("cls");

    switch (lingua)
    {
    case 1:

        printf("-----------\n");
        printf("Welcome!\n");
        printf("-----------\n");

        break;
    case 2:

        printf("-----------\n");
        printf("Bem-vindo!\n");
        printf("-----------\n");
        break;
    case 3:
        printf("-----------\n");
        printf("Bienvenido!\n");
        printf("-----------\n");
        break;

    default:

        printf("-----------------\n");
        printf(" invalid option\n");
        printf("-----------------\n");

        break;
    }

    return 0;
}