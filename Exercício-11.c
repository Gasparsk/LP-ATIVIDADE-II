#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo;

    do
    {
        printf("Digite o Codigo de acesso: ");
        scanf("%d", &codigo);
        
        if (codigo != 88437)
        {
            printf("------------------------------------\n");
            printf("Codigo invalido!\n");
            printf("------------------------------------\n");
        }

    } while (codigo != 88437);

    printf("------------------------------------\n");
    printf("Codigo aceito!, Abrindo portas..\n");
    printf("------------------------------------\n");

    return 0;
}