#include <stdio.h>
#include <stdlib.h>

float perimetro(float raio){
    return 2 * 3.14 * raio;
}

float area(float raio){
    return 3.14 * raio * raio;
}

void main()
{
    float raio, per, are;
    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);

    per = perimetro(raio);
    are = area(raio);

    printf("\nPerimetro: %f", per);
    printf("\nArea: %f", are);
}