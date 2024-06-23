#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m[3][3], i, j;

    printf("\nDigite os 9 valores da matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
            m[i][j] = m[i][j] * 2;
        }
    }
    printf("\nElementos da matriz multiplicados:\n");

    for (i = 0; i < 3; i++) 
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
    }
}