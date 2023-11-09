#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, somaPar = 0, somaImpar = 0, impar = 0, par = 0;
    float mediaPar, mediaImpar;

    do
    {

        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            par++;

            somaPar = somaPar + numero;
        }
        else if (numero % 2 == 1)
        {

            impar++;

            somaImpar = somaImpar + numero;
        }

    } while (numero >= 0);

    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;

    printf("---------------------------------------------\n");
    printf("Quantidade de numeros pares: %d \n", par);
    printf("Quantidade de numeros Impares: %d \n", impar);
    printf("---------------------------------------------\n");
    printf("Media de valores Pares: %.2f \n", mediaPar);
    printf("Media de valores impares: %.2f \n", mediaImpar);
    printf("---------------------------------------------\n");

    return 0;
}