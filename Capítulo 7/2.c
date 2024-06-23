#include <stdio.h>
#include <stdlib.h>

float calculaMedia(float n1, float n2, float n3)
{
    return ((n1 + n2 + n3) / 3);
}

void main()
{
    float n1, n2, n3, media = 0;
    printf("\nDigite as 3 notas:");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = calculaMedia(n1, n2, n3);
    printf("\nMedia final: %f", media);
}