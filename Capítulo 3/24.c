#include <stdio.h>
#include <stdlib.h>

void main()
{
    float velocidade, distancia, tempo, consumo;
    float total = 0;
    do
    {
        printf("Digite a velocidade em KM: ");
        scanf("%f", &velocidade);
        if (velocidade < 0)
            break;

        printf("Digite o tempo em Horas: ");
        scanf("%f", &tempo);

        distancia = velocidade * tempo; 
        consumo = distancia / 10;
        total += consumo;

        printf("Distancia percorrida: %.2f\n", distancia);
        printf("Total gasto no trecho: %.2f\n", consumo);

    } while (velocidade >= 0);

    printf("\nTotal de litros consumidos: %f", total);
}