//  Construa um programa que leia o percurso em quilómetros, o tipo do carro e
// informe o consumo estimado de combustível, sabendo-se que um carro tipo C
// faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
#include <stdio.h>
#include <stdlib.h>

void main() {
    char tipo;
    float percurso, consumo;
    printf("Digite o tipo de carro [A], [B] ou [C]: ");
    scanf("%c", &tipo);
    printf("Digite a distacia em KM: ");
    scanf("%f", &percurso);
    switch (tipo)
    {
    case 'A':
        consumo = percurso / 12;
            printf("Consumo estimado: %.2f", consumo);
        break;
    case 'B':
        consumo = percurso / 9;
            printf("Consumo estimado: %.2f", consumo);
        break;
    case 'C':
        consumo = percurso / 8;
            printf("Consumo estimado: %.2f", consumo);
        break;
        default : 
            printf("Tipo de carro invalido!");
    }
}