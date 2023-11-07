#include <stdio.h>
#include <stdlib.h>

    int main()
{

    float nota = 0;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("\n");
        printf("Nota: Excelente");
    }
    else if (nota >= 7 )
    {
        printf("\n");
        printf("Nota: Bom");
    }
    else if (nota >= 5 )
    {
        printf("\n");
        printf("Nota: Razoavel");
    }
    else {
        printf("\n");
        printf("Nota: Insuficiente");
    }

    return 0;
}