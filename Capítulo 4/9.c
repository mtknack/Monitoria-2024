#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void main() 
{
    int v1[TAM], v2[TAM], v3[TAM], i, j, cont = 0;

    printf("\nDigite os 10 numeros do vetor 1: \n");
    for (i = 0; i < TAM; i++) 
        scanf("%d", &v1[i]);

    printf("\nDigite os 10 numeros do vetor 2: \n");
    for (i = 0; i < TAM; i++)
        scanf("%d", &v2[i]);

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (v1[i] == v2[j])
            {
                v3[cont] = v1[i];
                cont++;
                break;
            }
        }
    }

    printf("\nElementos comuns aos conjuntos: \n");
    for (i = 0; i < cont; i++)
    {
        printf("%d\n", v3[i]);
    }
}