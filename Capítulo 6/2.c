#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

void main()
{
    struct ponto p;
    float resultado;
    printf("Informe o ponto x:\n");
    scanf("%d", &p.x);
    printf("Informe o ponto y:\n");
    scanf("%d", &p.y);
    resultado = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));
    printf("Distancia do ponto de origem (0,0): %f\n", resultado);
}