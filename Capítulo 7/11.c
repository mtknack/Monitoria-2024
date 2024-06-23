#include <stdio.h>
#include <stdlib.h>

float area(float diagonalMaior, float diagonalMenor)
{
    return (diagonalMaior * diagonalMenor) / 2;
}

void main()
{
    float diagonalMaior, diagonalMenor, are;
    printf("\nDigite as diagonais maior e menor do losango: ");
    scanf("%f %f", &diagonalMaior, &diagonalMenor);
    
    are = area(diagonalMaior, diagonalMenor);
    printf("\nArea: %f", are);
}