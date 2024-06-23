#include <stdio.h>
#include <stdlib.h>

void main()
{
    int c[2][3], t[3][2], i, j;

    printf("\nDigite os 6 valores da matriz:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &c[i][j]);
            t[j][i] = c[i][j];
        }       
    }

    printf("\nElementos da matriz transposta:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", t[i][j]);
    }
}
