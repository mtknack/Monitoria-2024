#include <stdio.h>
#include <stdlib.h>
void main()
{
    int m[4][5], i, j, soma = 0;
    printf("\nDigite os 20 valores da matriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
            soma += m[i][j];
        }
    }

    printf("\nSoma dos elementos damatriz:\n");
    printf("%d", soma);
}