#include <stdio.h>
#include <stdlib.h>

// 14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o
// perímetro (2*base + 2*altura) e a área (base * altura).
void main(){

    float base, altura;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Perimetro: %fm\n", 2 * (base + altura));
    printf("Area: %fm2 \n", base * altura);
}