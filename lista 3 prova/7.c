#include <stdio.h>
#define max 3

void METADE(float n)
{
    printf("A medade de %f eh: %f\n", n, n / 2);
}

void main()
{

    float n[max];

    printf("Digite os valor de n: \n");
    for (int i = 0; i < max; i++)
    {
        scanf("%f", &n[i]);
    }

    for (int i = 0; i < max; i++)
    {
        METADE(n[i]);
    }
}