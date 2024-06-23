#include <stdio.h>
#include <stdlib.h>

int numeroPrimo(int n)
{
    int i, aux = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            aux++;
    return aux;
}

void main()
{
    int n, primo;
    printf("\nDigite o numero: ");
    scanf("%d", &n);
    primo = numeroPrimo(n);
    if (primo == 2)
        printf("\nNumero primo");
    else
        printf("\nNumero nao primo");
}