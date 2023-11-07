#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;

    printf("Digite sua idade para ter acesso: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("--------------------\n");
        printf("Acesso Permitido\n");
        printf("--------------------");
    }
    else
    {
        printf("--------------------\n");
        printf("Acesso Negado\n");
        printf("--------------------");
    }

    return 0;
}