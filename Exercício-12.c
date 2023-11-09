#include <stdio.h>
#include <stdlib.h>

int main()
{

int quantidade, soma = 0, nota, i;
float media ;

printf("Quantas notas ira Inserir ?: ");
scanf("%d", &quantidade);

for (i = 1; i <= quantidade; i++)
{
    printf("%d nota: ", i);
    scanf("%d", &nota);
    printf("------------\n");

soma = soma + nota;

}

media = soma / quantidade;

printf("------------------------------------------\n");
printf("Media das notas digitadas: %.2f \n", media);
printf("------------------------------------------\n");


return 0;
}