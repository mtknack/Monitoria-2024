#include <stdio.h>
#include <stdlib.h>

int vetor(int *v, int num)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        if (v[i] == num)
            return i;
    }
    return -1;
}
void main()
{
    int v[20], i, num;
    printf("\nDigiteos 20 elementos do vetor:");
    for (i = 0; i < 20; i++)
        scanf("%d", &v[i]);
    printf("\nDigite o elemento para buscar no vetor:");
    scanf("%d", &num);
    i = vetor(v, num);
    if (i != -1)
        printf("\nPosicao do elemento no vetor: %d", i);
    else
        printf("\nElemento nao consta no vetor");
}
