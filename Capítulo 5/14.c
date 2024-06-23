#include <stdio.h>
#include <stdlib.h>

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

void main()
{
    int m[5][5];
    int i, j, k, aux;

    printf("\nDigite os 25 valores da matriz:\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);

    // imprindo a matriz

    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
            printf("%d\t", m[i][j]);
    }
    printf("\n\n"); 
    
    printf("trocando a segunda linha pela quinta\n"); 
    for (j = 0; j < 5; j++)
    {
        aux = m[1][j];
        m[1][j] = m[4][j];
        m[4][j] = aux;
    }

    // imprindo a matriz
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
            printf("%d\t", m[i][j]);
    }
    printf("\n\n");

    printf("trocando a terceira coluna pela quinta\n"); 
    for (i = 0; i < 5; i++)
    {
        aux = m[i][2];
        m[i][2] = m[i][4];
        m[i][4] = aux;
    }

    // imprindo a matriz
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
            printf("%d\t", m[i][j]);
        
    }

    printf("\n\n");

    printf("trocando a diagonal principal pela diagonal secundaria\n"); 
    i = 0;
    k = 4;

    for (j = 0; j < 5; j++)
    {
        aux = m[i][j];
        m[i][j] = m[k][j];
        m[k][j] = aux;
        k--;
        i++;
    }

    // imprindo a matriz
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++) 
            printf("%d\t", m[i][j]);
    
    }
}