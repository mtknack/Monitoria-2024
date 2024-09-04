#include <stdio.h>

float DOBRO(float n)
{
    return n * 2;
}

void chamaDobro(float n1, float n2, float n3)
{
    printf("O dobro de %f eh %f\n", n1, DOBRO(n1));
    printf("O dobro de %f eh %f\n", n2, DOBRO(n2));
    printf("O dobro de %f eh %f\n", n3, DOBRO(n3));
}

void main()
{

    float n1, n2, n3;

    printf("Digite os 3 valores\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    chamaDobro(n1, n2, n3);
}