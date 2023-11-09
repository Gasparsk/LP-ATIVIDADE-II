#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    if (num <= 3)
    {
        return 1;
    }

    if (num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int num;

    printf("--------------------------\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (is_prime(num))
    {
        printf("--------------------------\n");
        printf("%d e um numero primo.\n", num);
        printf("---------------------------\n");
    }
    else
    {
        printf("------------------------------\n");
        printf("%d nao e um numero primo.\n", num);
        printf("----------------------------\n");
    }

    return 0;
}