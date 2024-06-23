#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A[3][4], B[3][4], i, j;
    printf("\nDigite os 12 valores da matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
            B[i][j] = A[i][j] * 3;
        }
    }

    printf("\nElementos da matriz:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", B[i][j]);
        }
    }
}