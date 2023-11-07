#include <stdio.h>
#include <stdlib.h>

int main()
{

    int grau;

    printf("Darwin: como estar o clima em graus nessa manha ?\n");
    printf("Voce: ");
    scanf("%d", &grau);

    system("cls");

    if (grau > 25)
    {
        printf("------------------------------------------------------------------------\n");
        printf("Darwin: O clima esta Ensolarado, vamos para uma Aventura!\n");
        printf("------------------------------------------------------------------------");
    }
    else if (grau < 15)
    {
        printf("------------------------------------------------------------------------\n");
        printf("Darwin: O clima esta Chuvoso, quem sabe outro dia...\n");
        printf("------------------------------------------------------------------------");
    }
    else
    {
        printf("---------------------------------------------------------------------------\n");
        printf("Darwin: O clima esta Nublado, acho que ainda da tempo para uma Aventura.\n");
        printf("---------------------------------------------------------------------------");
    }

    return 0;
}